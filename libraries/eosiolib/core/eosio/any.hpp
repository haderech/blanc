#pragma once

#include <eosio/check.hpp>
#include <eosio/print.hpp>
#include <boost/preprocessor/stringize.hpp>
#include <boost/preprocessor/seq/for_each.hpp>

#include <map>
#include <variant>
#include <vector>

namespace eosio { 

   struct any {
      enum type_id {
         null_type,
         int64_type,
         uint64_type,
         double_type,
         bool_type,
         string_type,
         array_type,
         object_type,
      };

      struct null {};
      typedef std::vector<any> array;
      typedef std::map<std::string, any> object;
      
      std::variant<null, int64_t, uint64_t, double, bool, std::string, array, object> data;

      any() = default;

      template<typename T>
      any(T v): data(v) {}

      template<typename T>
      const T& get() const {
         return std::get<T>(data);
      }

      template<typename T>
      T& get() {
         return std::get<T>(data);
      }

      template<typename T>
      const T as() const {
         if (std::holds_alternative<T>(data)) {
            return std::get<T>(data);
         }
         switch (data.index()) {
            case type_id::int64_type:
               return static_cast<T>(std::get<int64_t>(data));
            case type_id::uint64_type:
               return static_cast<T>(std::get<uint64_t>(data));
            case type_id::double_type:
               return static_cast<T>(std::get<double>(data));
            default:
               eosio::check(false, "invalid access to any");
         }
         return T();
      }

      template<>
      const std::string as() const {
         if (std::holds_alternative<std::string>(data)) {
            return std::get<std::string>(data);
         }
         switch (data.index()) {
            case type_id::int64_type:
               return std::to_string(std::get<int64_t>(data));
            case type_id::uint64_type:
               return std::to_string(std::get<uint64_t>(data));
            case type_id::double_type:
               return std::to_string(std::get<double>(data));
            default:
               eosio::check(false, "invalid access to any");
         }
         return "";
      }

      template<typename T>
      T as() {
         return const_cast<const any*>(this)->as<T>();
      }

      template<>
      std::string as() {
         return const_cast<const any*>(this)->as<std::string>();
      }

      operator bool() {
         switch (data.index()) {
            case type_id::null_type:
               return false;
            case type_id::int64_type:
            case type_id::uint64_type:
            case type_id::double_type:
            case type_id::bool_type:
               return as<bool>();
            case type_id::string_type:
               return !!get<std::string>().size();
            case type_id::array_type:
            case type_id::object_type:
               return true;
         }
         return false;
      }

      any& operator[](size_t i) {
         return get<array>().at(i);
      }

      const any& operator[](size_t i) const {
         return get<array>().at(i);
      }

      any& operator[](const char* key) {
         return get<object>().at(std::string(key));
      }

      const any& operator[](const char* key) const {
         return get<object>().at(std::string(key));
      }

      any& operator[](const std::string& key) {
         return get<object>().at(key);
      }

      const any& operator[](const std::string& key) const {
         return get<object>().at(key);
      }

      struct print_visitor {
         template<typename T>
         void operator()(const T& v) { eosio::print(v); }
         void operator()(const null& ) { eosio::print("null"); }
         void operator()(const std::string& v) { eosio::print("\"", v, "\""); }
         void operator()(const array& arr) {
            bool has_items = false;
            eosio::print("[");
            for (auto const& v : arr) {
               eosio::print((!has_items ? (has_items = true, "") : ", "), v);
            }
            eosio::print("]");
         }
         void operator()(const object& obj) {
            bool has_items = false;
            eosio::print("{");
            for (auto const& [k, v] : obj) {
               eosio::print((!has_items ? (has_items = true, "\"") : ", \""), k, "\": ", v);
            }
            eosio::print("}");
         }
      };

      void print() const {
         std::visit(print_visitor(), data);
      }

      any to_any() {
         return *this;
      }

      EOSLIB_SERIALIZE(any, (data))
   };

   any operator+(const any& lhs, const any& rhs) {
      if (std::holds_alternative<std::string>(lhs.data) || std::holds_alternative<std::string>(rhs.data))
         return lhs.as<std::string>() + rhs.as<std::string>();
      if (std::holds_alternative<double>(lhs.data) || std::holds_alternative<double>(rhs.data))
         return lhs.as<double>() + rhs.as<double>();
      if (std::holds_alternative<int64_t>(lhs.data) || std::holds_alternative<int64_t>(rhs.data))
         return lhs.as<int64_t>() + rhs.as<int64_t>();
      if (std::holds_alternative<uint64_t>(lhs.data) || std::holds_alternative<uint64_t>(rhs.data))
         return lhs.as<uint64_t>() + rhs.as<uint64_t>();
      eosio::check(false, "invalid operation between any");
      return any::null{};
   }

   any operator-(const any& lhs, const any& rhs) {
      if (std::holds_alternative<double>(lhs.data) || std::holds_alternative<double>(rhs.data))
         return lhs.as<double>() - rhs.as<double>();
      if (std::holds_alternative<int64_t>(lhs.data) || std::holds_alternative<int64_t>(rhs.data))
         return lhs.as<int64_t>() - rhs.as<int64_t>();
      if (std::holds_alternative<uint64_t>(lhs.data) || std::holds_alternative<uint64_t>(rhs.data))
         return lhs.as<uint64_t>() - rhs.as<uint64_t>();
      eosio::check(false, "invalid operation between any");
      return any::null{};
   }

   any operator*(const any& lhs, const any& rhs) {
      if (std::holds_alternative<double>(lhs.data) || std::holds_alternative<double>(rhs.data))
         return lhs.as<double>() * rhs.as<double>();
      if (std::holds_alternative<int64_t>(lhs.data) || std::holds_alternative<int64_t>(rhs.data))
         return lhs.as<int64_t>() * rhs.as<int64_t>();
      if (std::holds_alternative<uint64_t>(lhs.data) || std::holds_alternative<uint64_t>(rhs.data))
         return lhs.as<uint64_t>() * rhs.as<uint64_t>();
      eosio::check(false, "invalid operation between any");
      return any::null{};
   }

   any operator/(const any& lhs, const any& rhs) {
      if (std::holds_alternative<double>(lhs.data) || std::holds_alternative<double>(rhs.data))
         return lhs.as<double>() / rhs.as<double>();
      if (std::holds_alternative<int64_t>(lhs.data) || std::holds_alternative<int64_t>(rhs.data))
         return lhs.as<int64_t>() / rhs.as<int64_t>();
      if (std::holds_alternative<uint64_t>(lhs.data) || std::holds_alternative<uint64_t>(rhs.data))
         return lhs.as<uint64_t>() / rhs.as<uint64_t>();
      eosio::check(false, "invalid operation between any");
      return any::null{};
   }

   template<typename T>
   any to_any(T v) {
      return v.to_any();
   }

   template<typename T>
   T from_any(const any& v) {
      return T::from_any(v);
   }
 }

#define ANY_IMPL(TYPE) \
namespace eosio { \
   template<> \
   any to_any(TYPE v) { \
      any a; \
      a.data = v; \
      return a; \
   } \
   template<> \
   TYPE from_any(const any& v) { \
      return v.get<TYPE>(); \
   } \
}

ANY_IMPL(any::null)
ANY_IMPL(int64_t)
ANY_IMPL(uint64_t)
ANY_IMPL(double)
ANY_IMPL(bool)
ANY_IMPL(std::string)
ANY_IMPL(any::array)
ANY_IMPL(any::object)

namespace eosio {
   template<>
   any to_any(name v) {
      any a;
      a.data = v.value;
      return a;
   }
   template<>
   name from_any(const any& v) {
      switch (v.data.index()) {
         case any::type_id::uint64_type:
            return name(v.get<uint64_t>());
         case any::type_id::string_type:
            return name(v.get<std::string>());
         default:
            check(false, "name from any requires uint64_t or std::string");
      }
      return {};
   }
}

#define STRUCT_FIELD_TO_ANY(r, data, elem) \
      obj[BOOST_PP_STRINGIZE(elem)] = eosio::to_any(elem);

#define ANY_TO_STRUCT_FIELD(r, data, elem) \
      obj.elem = eosio::from_any<decltype(elem)>(data[BOOST_PP_STRINGIZE(elem)]);

#define ANYFY_STRUCT(TYPE, ARGS) \
   eosio::any to_any() { \
      eosio::any::object obj; \
      BOOST_PP_SEQ_FOR_EACH(STRUCT_FIELD_TO_ANY, _, ARGS) \
      return obj; \
   } \
   const eosio::any to_any() const { \
      eosio::any::object obj; \
      BOOST_PP_SEQ_FOR_EACH(STRUCT_FIELD_TO_ANY, _, ARGS) \
      return obj; \
   } \
   static TYPE from_any(const eosio::any& v) { \
      eosio::check(std::holds_alternative<eosio::any::object>(v.data), "given any type doesn't contain object"); \
      TYPE obj; \
      BOOST_PP_SEQ_FOR_EACH(ANY_TO_STRUCT_FIELD, v, ARGS) \
      return obj; \
   }

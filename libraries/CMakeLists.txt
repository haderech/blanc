cmake_minimum_required(VERSION 3.16)

project(eosio_libraries)

find_program(CCACHE_FOUND ccache)
if (CCACHE_FOUND)
  message(STATUS "Using ccache")
  set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
endif()

set(CMAKE_BUILD_TYPE Release)

list(APPEND CMAKE_MODULE_PATH ${EOSIO_CDT_BIN})
include(EosioCDTMacros)

set(CMAKE_C_FLAGS " ${CMAKE_C_FLAGS} -O3 -Wall ")
set(CMAKE_CXX_FLAGS " ${CMAKE_CXX_FLAGS} -O3 -Wall ")

add_subdirectory(internal)
add_subdirectory(libc)
add_subdirectory(libc++)
add_subdirectory(eosiolib)
add_subdirectory(cosmwasm)
add_subdirectory(boost)
add_subdirectory(rt)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/meta_refl/include/bluegrass DESTINATION ${BASE_BINARY_DIR}/include)

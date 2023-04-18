/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {llvm::StringLiteral("")})
PREFIX(prefix_2, {llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
PREFIX(prefix_3, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
PREFIX(prefix_1, {llvm::StringLiteral("--") COMMA llvm::StringLiteral("-") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX

/////////
// Prefix Union

#ifdef PREFIX_UNION
#define COMMA ,
PREFIX_UNION({
llvm::StringLiteral("-") COMMA llvm::StringLiteral("--") COMMA llvm::StringLiteral("")})
#undef COMMA
#endif // PREFIX_UNION

/////////
// ValuesCode

#ifdef OPTTABLE_VALUES_CODE
#endif
/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, llvm::StringLiteral("<input>"), INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, llvm::StringLiteral("<unknown>"), UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("allow-undefined-file="), allow_undefined_file, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Allow symbols listed in <file> to be undefined in linked binary", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("allow-undefined-file"), allow_undefined_file_s, Separate, INVALID, allow_undefined_file, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("allow-undefined"), allow_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow undefined symbols in linked binary. This options is equivalent to --import-undefined and --unresolved-symbols=ignore-all", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("Bdynamic"), Bdynamic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Link against shared libraries (default)", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("Bstatic"), Bstatic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not link against shared libraries", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("Bsymbolic"), Bsymbolic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Bind defined symbols locally", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("call_shared"), anonymous_2, Flag, INVALID, Bdynamic, nullptr, 0, 0,
       "Alias for --Bdynamic", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("check-features"), check_features, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Check feature compatibility of linked objects (default)", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("color-diagnostics="), color_diagnostics_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Use colors in diagnostics (default: auto)", "[auto,always,never]", nullptr)
OPTION(prefix_1, llvm::StringLiteral("color-diagnostics"), color_diagnostics, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Alias for --color-diagnostics=always", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("compress-relocations"), compress_relocations, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Compress the relocation targets in the code section.", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("demangle"), demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Demangle symbol names", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("disable-verify"), disable_verify, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("dn"), anonymous_4, Flag, INVALID, Bstatic, nullptr, 0, 0,
       "Alias for --Bstatic", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("dy"), anonymous_3, Flag, INVALID, Bdynamic, nullptr, 0, 0,
       "Alias for --Bdynamic", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("emit-relocs"), emit_relocs, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Generate relocations in output", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("entry="), anonymous_1, Joined, INVALID, entry, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("entry"), entry, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Name of entry point symbol", "<entry>", nullptr)
OPTION(prefix_3, llvm::StringLiteral("error-limit="), error_limit_eq, Joined, INVALID, error_limit, nullptr, 0, 0,
       "Maximum number of errors to emit before stopping (0 = no limit)", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("error-limit"), error_limit, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("error-unresolved-symbols"), error_unresolved_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Report unresolved symbols as errors", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("experimental-pic"), experimental_pic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable Experimental PIC", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("export-all"), export_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Export all symbols (normally combined with --no-gc-sections)", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("export-dynamic"), export_dynamic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Put symbols in the dynamic symbol table", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("export-if-defined="), export_if_defined_eq, Joined, INVALID, export_if_defined, nullptr, 0, 0,
       "Force a symbol to be exported, if it is defined in the input", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("export-if-defined"), export_if_defined, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("export-memory="), export_memory_with_name, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Export the module's memory with the passed name", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("export-memory"), export_memory, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Export the module's memory with the default name of \"memory\"", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("export-table"), export_table, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Export function table to the environment", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("export="), export_eq, Joined, INVALID, export, nullptr, 0, 0,
       "Force a symbol to be exported", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("export"), export, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("extra-features="), extra_features, CommaJoined, INVALID, INVALID, nullptr, 0, 0,
       "Comma-separated list of features to add to the default set of features inferred from input objects.", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("E"), anonymous_7, Flag, INVALID, export_dynamic, nullptr, 0, 0,
       "Alias for --export-dynamic", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("e"), anonymous_0, JoinedOrSeparate, INVALID, entry, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("fatal-warnings"), fatal_warnings, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Treat warnings as errors", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("features="), features, CommaJoined, INVALID, INVALID, nullptr, 0, 0,
       "Comma-separated used features, inferred from input objects by default.", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("gc-sections"), gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable garbage collection of unused sections", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("global-base="), global_base, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Where to start to place global data", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("growable-table"), growable_table, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove maximum size from function table, allowing table to grow", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("help"), help, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print option help", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("import-memory="), import_memory_with_name, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Import the module's memory from the passed module with the passed name.", "<module>,<name>", nullptr)
OPTION(prefix_3, llvm::StringLiteral("import-memory"), import_memory, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Import the module's memory from the default module of \"env\" with the name \"memory\".", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("import-table"), import_table, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Import function table from the environment", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("import-undefined"), import_undefined, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Turn undefined symbols into imports where possible", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("initial-memory="), initial_memory, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Initial size of the linear memory", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("i"), anonymous_8, Flag, INVALID, initial_memory, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("library-path="), anonymous_12, Joined, INVALID, library_path, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("library-path"), anonymous_11, Separate, INVALID, library_path, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("library="), anonymous_10, Joined, INVALID, library, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("library"), anonymous_9, Separate, INVALID, library, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("lto-debug-pass-manager"), lto_debug_pass_manager, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Debug new pass manager", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("lto-O"), lto_O, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Optimization level for LTO", "<opt-level>", nullptr)
OPTION(prefix_3, llvm::StringLiteral("lto-partitions="), lto_partitions, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Number of LTO codegen partitions", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("L"), library_path, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Add a directory to the library search path", "<dir>", nullptr)
OPTION(prefix_2, llvm::StringLiteral("l"), library, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Root name of library to use", "<libName>", nullptr)
OPTION(prefix_1, llvm::StringLiteral("Map="), Map_eq, Joined, INVALID, Map, nullptr, 0, 0,
       "Print a link map to the specified file", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("Map"), Map, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("max-memory="), max_memory, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Maximum size of the linear memory", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("merge-data-segments"), merge_data_segments, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable merging data segments", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("mllvm="), mllvm_eq, Joined, INVALID, mllvm, nullptr, 0, 0,
       "Additional arguments to forward to LLVM's option processing", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("mllvm"), mllvm, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("M"), anonymous_13, Flag, INVALID, print_map, nullptr, 0, 0,
       "Alias for --print-map", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("m"), m, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Set target emulation", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("no-check-features"), no_check_features, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Ignore feature compatibility of linked objects", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-color-diagnostics"), no_color_diagnostics, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Alias for --color-diagnostics=never", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-demangle"), no_demangle, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not demangle symbol names", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("no-entry"), no_entry, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not output any entry point", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-export-dynamic"), no_export_dynamic, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not put symbols in the dynamic symbol table (default)", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-fatal-warnings"), no_fatal_warnings, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-gc-sections"), no_gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable garbage collection of unused sections", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("no-lto-legacy-pass-manager"), no_lto_legacy_pass_manager, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use new pass manager", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("no-merge-data-segments"), no_merge_data_segments, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable merging data segments", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-pie"), no_pie, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not create a position independent executable (default)", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-print-gc-sections"), no_print_gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not list removed unused sections", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("no-whole-archive"), no_whole_archive, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not force load of all members in a static library (default)", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("non_shared"), anonymous_5, Flag, INVALID, Bstatic, nullptr, 0, 0,
       "Alias for --Bstatic", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("O"), O, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Optimize output file size", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("o"), o, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Path to file to write output", "<path>", nullptr)
OPTION(prefix_1, llvm::StringLiteral("pie"), pie, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Create a position independent executable", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("print-gc-sections"), print_gc_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "List removed unused sections", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("print-map"), print_map, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print a link map to the standard output", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("relocatable"), relocatable, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Create relocatable object file", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("reproduce="), reproduce_eq, Joined, INVALID, reproduce, nullptr, 0, 0,
       "Dump linker invocation and input files for debugging", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("reproduce"), reproduce, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("rsp-quoting="), rsp_quoting_eq, Joined, INVALID, rsp_quoting, nullptr, 0, 0,
       "Quoting style for response files", "[posix,windows]", nullptr)
OPTION(prefix_1, llvm::StringLiteral("rsp-quoting"), rsp_quoting, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "[posix,windows]", nullptr)
OPTION(prefix_2, llvm::StringLiteral("r"), anonymous_14, Flag, INVALID, relocatable, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("save-temps"), save_temps, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Save intermediate LTO compilation results", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("shared-memory"), shared_memory, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Use shared linear memory", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("shared"), shared, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Build a shared object", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("stack-first"), stack_first, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Place stack at start of linear memory rather than after data", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("static"), anonymous_6, Flag, INVALID, Bstatic, nullptr, 0, 0,
       "Alias for --Bstatic", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("strip-all"), strip_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip all symbols", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("strip-debug"), strip_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Strip debugging information", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("S"), anonymous_16, Flag, INVALID, strip_debug, nullptr, 0, 0,
       "Alias for --strip-debug", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("s"), anonymous_15, Flag, INVALID, strip_all, nullptr, 0, 0,
       "Alias for --strip-all", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("thinlto-cache-dir="), thinlto_cache_dir, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Path to ThinLTO cached object file directory", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("thinlto-cache-policy="), thinlto_cache_policy_eq, Joined, INVALID, thinlto_cache_policy, nullptr, 0, 0,
       "Pruning policy for the ThinLTO cache", nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("thinlto-cache-policy"), thinlto_cache_policy, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_3, llvm::StringLiteral("thinlto-jobs="), thinlto_jobs, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Number of ThinLTO jobs. Default to --threads=", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("threads="), threads_eq, Joined, INVALID, threads, nullptr, 0, 0,
       "Number of threads. '1' disables multi-threading. By default all available hardware threads are used", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("threads"), threads, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("trace-symbol="), trace_symbol_eq, Joined, INVALID, trace_symbol, nullptr, 0, 0,
       "Trace references to symbols", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("trace-symbol"), trace_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("trace"), trace, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the names of the input files", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("t"), anonymous_17, Flag, INVALID, trace, nullptr, 0, 0,
       "Alias for --trace", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("undefined="), undefined_eq, Joined, INVALID, undefined, nullptr, 0, 0,
       "Force undefined symbol during linking", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("undefined"), undefined, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("unresolved-symbols="), unresolved_symbols_eq, Joined, INVALID, unresolved_symbols, nullptr, 0, 0,
       "Determine how to handle unresolved symbols", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("unresolved-symbols"), unresolved_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("u"), anonymous_19, JoinedOrSeparate, INVALID, undefined, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("verbose"), verbose, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Verbose mode", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("version"), version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version number and exit", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("v"), v, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Display the version number", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("warn-unresolved-symbols"), warn_unresolved_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Report unresolved symbols as warnings", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("whole-archive"), whole_archive, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Force load of all members in a static library", nullptr, nullptr)
OPTION(prefix_1, llvm::StringLiteral("wrap="), wrap_eq, Joined, INVALID, wrap, nullptr, 0, 0,
       "Use wrapper functions for symbol", "<symbol>=<symbol>", nullptr)
OPTION(prefix_1, llvm::StringLiteral("wrap"), wrap, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "<symbol>=<symbol>", nullptr)
OPTION(prefix_2, llvm::StringLiteral("y"), anonymous_18, JoinedOrSeparate, INVALID, trace_symbol, nullptr, 0, 0,
       "Alias for --trace-symbol", nullptr, nullptr)
OPTION(prefix_2, llvm::StringLiteral("z"), z, JoinedOrSeparate, INVALID, INVALID, nullptr, 0, 0,
       "Linker option extensions", "<option>", nullptr)
#endif // OPTION

#ifdef SIMPLE_ENUM_VALUE_TABLE

struct SimpleEnumValue {
  const char *Name;
  unsigned Value;
};

struct SimpleEnumValueTable {
  const SimpleEnumValue *Table;
  unsigned Size;
};
static const SimpleEnumValueTable SimpleEnumValueTables[] = {};
static const unsigned SimpleEnumValueTablesSize = std::size(SimpleEnumValueTables);
#endif // SIMPLE_ENUM_VALUE_TABLE



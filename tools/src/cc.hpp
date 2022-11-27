#pragma once

namespace clang {
namespace driver {

namespace options {
/// Flags specifically for clang options.  Must not overlap with
/// llvm::opt::DriverFlag.
enum ClangFlags {
  NoXarchOption = (1 << 4),
  LinkerInput = (1 << 5),
  NoArgumentUnused = (1 << 6),
  Unsupported = (1 << 7),
  CoreOption = (1 << 8),
  CLOption = (1 << 9),
  CC1Option = (1 << 10),
  CC1AsOption = (1 << 11),
  NoDriverOption = (1 << 12),
  LinkOption = (1 << 13),
  FlangOption = (1 << 14),
  FC1Option = (1 << 15),
  FlangOnlyOption = (1 << 16),
  DXCOption = (1 << 17),
  CLDXCOption = (1 << 18),
  Ignored = (1 << 19),
};

}}}

namespace blanc {

using namespace clang::driver::options;

enum ID {
   OPT_INVALID = 0,
#define OPTION(PREFIX, NAME, ID, KIND, GROUP, ALIAS, ALIASARGS, FLAGS, PARAM,  \
               HELPTEXT, METAVAR, VALUES)                                      \
   OPT_##ID,
#include <clang/Driver/Options.inc>
#include <eosio/Options.inc>
   // TODO: warn_action_read_only
   LastOption
#undef OPTION
};

}

OPTION(prefix_4, llvm::StringLiteral("profile="), profile, Joined, INVALID, INVALID, nullptr, CC1Option, 0, nullptr, nullptr, nullptr)
OPTION(prefix_4, llvm::StringLiteral("abi-version="), abi_version, Joined, INVALID, INVALID, nullptr, CC1Option, 0, nullptr, nullptr, nullptr)
OPTION(prefix_4, llvm::StringLiteral("no-abigen"), no_abigen, Flag, INVALID, INVALID, nullptr, CC1Option, 0, nullptr, nullptr, nullptr)
#ifndef ONLY_LD
OPTION(prefix_4, llvm::StringLiteral("contract"), contract, JoinedOrSeparate, INVALID, INVALID, nullptr, CC1Option, 0, nullptr, nullptr, nullptr)
OPTION(prefix_4, llvm::StringLiteral("no-missing-ricardian-clause"), no_missing_ricardian_clause, Flag, INVALID, INVALID, nullptr, CC1Option, 0, nullptr, nullptr, nullptr)
#endif

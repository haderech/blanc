if(APPLE)
  if("${CMAKE_HOST_SYSTEM_PROCESSOR}" STREQUAL "x86_64")
    set(BREW_ROOT "/usr/local/opt")
  elseif("${CMAKE_HOST_SYSTEM_PROCESSOR}" STREQUAL "arm64")
    set(BREW_ROOT "/opt/homebrew/opt")
  else()
    message(FATAL_ERROR "Unsupported architecture")
  endif()
  list(APPEND CMAKE_PREFIX_PATH "${BREW_ROOT}/llvm/lib/cmake")
endif()
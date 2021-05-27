
cxx_binary(
  name = "test",
  srcs = [
    "test.cpp",
  ],
)

cxx_toolchain(
  name = "my_toolchain",
  archiver = "toolchain/bin/llvm-ar",
  archiver_type = "BSD",
  assembler = "toolchain/bin/clang",
  c_compiler = "toolchain/bin/clang",
  compiler_type = "CLANG",
  cxx_compiler = "toolchain/bin/clang++",
  linker = "toolchain/bin/clang++",
  linker_type = "DARWIN",
  nm = "toolchain/bin/llvm-nm",
  objcopy_for_shared_library_interface = "toolchain/bin/llvm-objcopy",
  object_file_extension = ".o",
  shared_library_extension = ".dylib",
  shared_library_interface_type = "DISABLED",
  shared_library_versioned_extension_format = ".dylib",
  static_library_extension = ".a",
  strip = "toolchain/bin/llvm-strip",
  use_header_map = True,
  ranlib = "toolchain/bin/llvm-ranlib",
  visibility = [ 'PUBLIC' ]
)

cxx_toolchain(
  name = "my_toolchain_linux",
  archiver = "toolchain/bin/llvm-ar",
  archiver_type = "gnu",
  assembler = "toolchain/bin/clang",
  c_compiler = "toolchain/bin/clang",
  compiler_type = "CLANG",
  cxx_compiler = "toolchain/bin/clang++",
  linker = "toolchain/bin/clang++",
  linker_type = "gnu",
  nm = "toolchain/bin/llvm-nm",
  objcopy_for_shared_library_interface = "toolchain/bin/llvm-objcopy",
  object_file_extension = ".o",
  ranlib = "toolchain/bin/llvm-ranlib",
  shared_library_extension = ".so",
  shared_library_interface_type = "DISABLED",
  shared_library_versioned_extension_format = ".so%s",
  static_library_extension = ".a",
  strip = "toolchain/bin/llvm-strip",
  use_header_map = True,
  visibility = [ 'PUBLIC' ]
)

ndk_toolchain(
  name = "mdk",
  cxx_runtime = "LIBCXX",
  cxx_toolchain = "//:mmy_toolchain_linux",
  objdump = "toolchain/bin/llvm-objdump",
  visibility = [ 'PUBLIC' ]
)

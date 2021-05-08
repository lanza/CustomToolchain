
cxx_binary(
  name = "test",
  srcs = [
    "test.cpp",
  ],
)

cxx_toolchain(
  name = "muffin",
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

ndk_toolchain(
  name = "mdk",
  cxx_toolchain = "//:muffin",
  cxx_runtime = "LIBCXX",
  objdump = "toolchain/bin/llvm-objdump",
)

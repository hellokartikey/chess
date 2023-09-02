file(GLOB_RECURSE ALL_SOURCE_FILES src/*.cc src/*.h)

set(
  CMAKE_CXX_CLAG_TIDY
  clang-tidy;
  -format-style='file';
  -header-filter=${ALL_SOURCE_FILES}
)

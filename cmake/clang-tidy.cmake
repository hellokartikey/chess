file(GLOB_RECURSE ALL_SOURCE_FILES *.cc *.h)

add_custom_target(
    clang-tidy
    ${ALL_SOURCE_FILES}
)

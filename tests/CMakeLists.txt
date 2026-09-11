# ── Settings ─────────────────────────────────────────────────────────────────
enable_language(CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ── Google Test ──────────────────────────────────────────────────────────────
include(GoogleTest)
enable_testing()

# ───────────────────────────────────────────────────────────────────────────── 
# Target: preproc_test
# Alias: preproc::preproc_test
# Type: Executable
# Dependencies: GTest::gtest_main,
#               GTest::gmock_main,
#               preproc::preproc_headers
# ─────────────────────────────────────────────────────────────────────────────
# Target definition
add_executable(preproc_test)

# Target alias
add_executable(preproc::preproc_test
    ALIAS preproc_test
)

# Target sources
target_sources(preproc_test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/preproc_test.cpp
)

# Target dependencies
target_link_libraries(preproc_test
    PRIVATE
        preproc::preproc_headers
        GTest::gtest_main
        GTest::gmock_main
)

# Test discovery
gtest_discover_tests(preproc_test)

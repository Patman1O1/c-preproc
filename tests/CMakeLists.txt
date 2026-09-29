# ── Settings ─────────────────────────────────────────────────────────────────
enable_language(CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ── Google Test ──────────────────────────────────────────────────────────────
include(GoogleTest)
enable_testing()

# ───────────────────────────────────────────────────────────────────────────── 
# Target: c_preproc_test
# Alias: c_preproc::c_preproc_test
# Type: Executable
# Dependencies: GTest::gtest_main,
#               GTest::gmock_main,
#               c_preproc::c_preproc_headers
# ─────────────────────────────────────────────────────────────────────────────
# Target definition
add_executable(c_preproc_test)

# Target alias
add_executable(c_preproc::c_preproc_test
    ALIAS c_preproc_test
)

# Target sources
target_sources(c_preproc_test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/c_preproc_test.cpp
)

# Target dependencies
target_link_libraries(c_preproc_test
    PRIVATE
        c_preproc::c_preproc_headers
        GTest::gtest_main
        GTest::gmock_main
)

# Test discovery
gtest_discover_tests(c_preproc_test)

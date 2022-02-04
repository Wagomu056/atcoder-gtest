project(main_test)

find_package(GTest REQUIRED)

add_executable(main_test main_test.cpp test_macro.h)
target_link_libraries(main_test GTest::gtest GTest::gtest_main)

enable_testing()
gtest_discover_tests(main_test)

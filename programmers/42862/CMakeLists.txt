set(NAME 42862)

file(GLOB SOURCE *.cpp)
add_executable(${NAME} ${SOURCE})

target_link_libraries(${NAME} PRIVATE GTest::gtest GTest::gtest_main)

gtest_discover_tests(${NAME})

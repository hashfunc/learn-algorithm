set(NAME 42626)

file(GLOB SOURCE *.cc)
add_executable(${NAME} ${SOURCE})

target_link_libraries(${NAME} PRIVATE GTest::gtest GTest::gtest_main)

add_test(AllTestsInMain ${NAME})

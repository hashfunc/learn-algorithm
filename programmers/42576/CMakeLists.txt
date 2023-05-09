set(NAME 42576)

file(GLOB SOURCE *.cc)
add_executable(${NAME} ${SOURCE})

target_link_libraries(${NAME} PRIVATE GTest::gtest GTest::gtest_main)

add_test(AllTestsInMain ${NAME})

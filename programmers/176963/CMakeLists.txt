set(NAME 176963)

file(GLOB SOURCE *.cpp)
add_executable(${NAME} ${SOURCE})

target_link_libraries(${NAME} PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

add_test(AllTestsInMain ${NAME})

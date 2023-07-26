cmake_minimum_required(VERSION 3.25)

project(learn_algorithm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Threads REQUIRED)
find_package(GTest CONFIG REQUIRED)

enable_testing()

add_subdirectory(programmers)

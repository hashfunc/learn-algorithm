find_package(Threads REQUIRED)
find_package(GTest CONFIG REQUIRED)

file(GLOB FILES LIST_DIRECTORIES true "*")

foreach(FILE ${FILES})
    if(IS_DIRECTORY ${FILE} AND NOT ${FILE} MATCHES "CMakeFiles")
        add_subdirectory(${FILE})
    endif()
endforeach()

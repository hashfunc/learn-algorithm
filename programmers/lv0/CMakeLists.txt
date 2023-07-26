find_package(Threads REQUIRED)
find_package(GTest CONFIG REQUIRED)

file(GLOB FILES LIST_DIRECTORIES true "*")

foreach(FILE ${FILES})
    if(IS_DIRECTORY ${FILE})
        add_subdirectory(${FILE})
    endif()
endforeach()

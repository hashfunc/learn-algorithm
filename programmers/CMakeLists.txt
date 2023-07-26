include(GoogleTest)

file(GLOB FILES LIST_DIRECTORIES true "*")

foreach(FILE ${FILES})
    if(IS_DIRECTORY ${FILE})
        add_subdirectory(${FILE})
    endif()
endforeach()

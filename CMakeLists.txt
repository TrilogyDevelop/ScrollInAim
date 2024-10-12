cmake_minimum_required(VERSION 3.15)
project(ScrollInAim)

set(TRILOGYSA ON)

if (TRILOGYSA)
    add_compile_definitions(TRILOGYSA)
else()
    if (NOT MSVC)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")
    endif()
endif()


add_subdirectory("vendor")
add_subdirectory("plugin")
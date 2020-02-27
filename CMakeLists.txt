cmake_minimum_required(VERSION 3.14)
project(algorithms)

set(CMAKE_CXX_STANDARD 17)

add_library(quick_sort_test quick_sort_test.cpp quick_sort.h)
add_executable(algorithms catch_main.cpp quick_sort_test)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()
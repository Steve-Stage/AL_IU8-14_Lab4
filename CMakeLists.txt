cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lab04)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB t1.cpp t2.cpp t3.cpp t4.cpp t5.cpp t6.cpp t7.cpp t8.cpp)

add_library(t_dep STATIC ${SOURCE_LIB})
add_executable(main ${SOURCE_EXE})

target_link_libraries(main PRIVATE t_dep)
cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lab04)

add_library(t_dep STATIC t1.cpp t2.cpp t3.cpp t4.cpp t5.cpp t6.cpp t7.cpp t8.cpp)
add_executable(main main.cpp)

target_link_libraries(main t_dep)

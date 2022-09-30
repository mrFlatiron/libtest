cmake_minimum_required(VERSION 3.12)
project(testexport)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(app)
add_subdirectory(base)
add_subdirectory(links_shared)
add_subdirectory(links_static)

project(links_static)

add_library(links_static SHARED "src/impl.cpp")

target_include_directories(links_static PUBLIC "include")
target_link_libraries(links_static base_static)
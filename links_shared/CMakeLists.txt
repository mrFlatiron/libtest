project(links_shared)

add_library(links_shared SHARED "src/impl.cpp")

target_include_directories(links_shared PUBLIC "include")
target_link_libraries(links_shared base_shared)
project(libbase_all)

add_library(base_shared SHARED "src/symbols.cpp")
target_include_directories(base_shared PUBLIC "include")
set_target_properties(base_shared PROPERTIES OUTPUT_NAME base)


add_library(base_static STATIC "src/symbols.cpp")
target_include_directories(base_static PUBLIC "include")
set_target_properties(base_static PROPERTIES OUTPUT_NAME base)
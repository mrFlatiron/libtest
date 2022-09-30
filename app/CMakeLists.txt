project(app)

add_executable(app main.cpp)

target_link_libraries(app base_static links_static links_shared)
# target_link_libraries(app base_static links_shared)
# target_link_libraries(app base_shared base_static)
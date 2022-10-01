set(SOURCE
    src/main.c)

add_executable(example ${SOURCE})
target_include_directories(example PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(example PRIVATE Hydrogen)

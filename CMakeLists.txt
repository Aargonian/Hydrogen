cmake_minimum_required(VERSION 3.0)

project(Hydrogen)

find_package(SDL2 REQUIRED)

set(SOURCE
    src/main.c)

add_executable(Hydrogen ${SOURCE})
target_include_directories(Hydrogen PRIVATE ${SDL2_INCLUDE_DIRS})
target_link_libraries(Hydrogen PRIVATE ${SDL2_LIBRARIES})

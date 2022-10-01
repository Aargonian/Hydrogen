cmake_minimum_required(VERSION 3.0)

project(Hydrogen)

find_package(SDL2 REQUIRED)

set(SOURCE
    src/hydrogen.c)

add_library(Hydrogen STATIC ${SOURCE})
target_include_directories(Hydrogen PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(Hydrogen PRIVATE ${SDL2_INCLUDE_DIRS})
target_link_libraries(Hydrogen PRIVATE ${SDL2_LIBRARIES})

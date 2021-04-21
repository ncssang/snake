cmake_minimum_required(VERSION 3.1)

project(snake)

find_package(
    SFML 2.5
    COMPONENTS graphics system window
    REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(snake src/main.cpp src/asset_man.cpp src/game.cpp src/state_man.cpp src/main_menu.cpp)

target_link_libraries(snake sfml-graphics sfml-system sfml-window)

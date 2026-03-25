cmake_minimum_required(VERSION 3.10)
project(robot)
#[TODO] Implentasikan CMakeList di bawah ini

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_executable(main
    src/main.cpp
    src/robot.cpp
    src/robotair.cpp
)

set_target_properties(main PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
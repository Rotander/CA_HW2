# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(task255 LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        # Headers
        rnd.h
        parallelepiped.h
        ball.h
        shape.h
        container.h
        tetrahedron.h

        # Sources
        parallelepiped.cpp
        ball.cpp
        shape.cpp
        container.cpp
        main.cpp
        tetrahedron.cpp
        )

add_executable(task255 ${SOURCE_FILES})

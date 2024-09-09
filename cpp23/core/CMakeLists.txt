# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Set the project name and specify the language
project(println_cpp23 LANGUAGES CXX)

# Set the C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable target
add_executable(println_cpp23 println_cpp23.cpp)
# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Set the project name and specify the language
project(println_cpp26 LANGUAGES CXX)

# Set the C++ standard to C++26
set(CMAKE_CXX_STANDARD 23)  # MSVC does not take 26 yet, have to use 23 for now
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable target
add_executable(println_cpp26 println_cpp26.cpp)
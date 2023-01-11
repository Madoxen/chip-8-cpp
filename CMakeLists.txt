cmake_minimum_required(VERSION 3.22)
project(chip8)
add_executable(chip8 src/main.cpp src/chip8.cpp)


target_include_directories(chip8 PUBLIC "src")

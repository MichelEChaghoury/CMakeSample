cmake_minimum_required(VERSION 3.5)

project(CMakeSample
        VERSION 0.0.1 
        DESCRIPTION "A Sample CMake Project for building Cross Platform C++ Application"
        LANGUAGES CXX
    )

add_executable(CMakeSample src/app.cpp)

target_compile_features(CMakeSample PRIVATE cxx_std_20)

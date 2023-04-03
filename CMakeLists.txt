cmake_minimum_required(VERSION 3.24.0)
set(CMAKE_CXX_STANDARD 17)

project(modelforge)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(project_dir ${CMAKE_SOURCE_DIR})

include_directories(include/)

add_executable(forge forge.cc)

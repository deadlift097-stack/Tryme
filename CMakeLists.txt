cmake_minimum_required(VERSION 3.22)
project(clange_me CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(levilamina REQUIRED)

add_library(${MOD_LIBRARY_NAME} SHARED
    src/main.cpp
    src/mod/MyMod.cpp
    src/mod/Config.cpp
)

target_link_libraries(${MOD_LIBRARY_NAME} PRIVATE levilamina::levilamina)

cmake_minimum_required(VERSION 3.27)

project(Simulador-nome)

set(CMAKE_BUILD_TYPE Release)

include_directories(src)

add_subdirectory(src)

set_property(TARGET  Simulador-nome  PROPERTY CXX_STANDARD 23)

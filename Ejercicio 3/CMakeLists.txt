cmake_minimum_required(VERSION 3.26)
project(Ejercicio_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(circulo main.cpp
        circulo.cpp
        circulo.h)

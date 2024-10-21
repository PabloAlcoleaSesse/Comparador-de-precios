cmake_minimum_required(VERSION 3.29)
project(Comparador_de_precios_v2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Comparador_de_precios_v2 main.cpp
        Producto.h
        Producto.cpp)

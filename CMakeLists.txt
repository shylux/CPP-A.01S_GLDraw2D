cmake_minimum_required(VERSION 3.4)
project(CPPA_01S_GLDraw2D)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Geom.cpp Geom.h)
add_executable(CPPA_01S_GLDraw2D ${SOURCE_FILES})
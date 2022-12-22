cmake_minimum_required(VERSION 3.0.0)
project(vectors)


add_library(geom geom.cpp geom.hpp)

add_executable(spring_pendulum spring_pendulum.cpp geom.hpp)


target_link_libraries(spring_pendulum geom)

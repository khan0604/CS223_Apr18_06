cmake_minimum_required(VERSION 3.10)
project(GMS)

set(CMAKE_CXX_STANDARD 11)

add_executable(GMS main.cpp init.cpp init.h user.cpp user.h utility.cpp utility.h Statistics.cpp Statistics.h Courses.cpp Courses.h)
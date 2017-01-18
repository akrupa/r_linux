cmake_minimum_required (VERSION 2.8)

project(Hello)



SET(CMAKE_CXX_EXE_LINKER_FLAGS  "${CMAKE_CXXEXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")

add_executable(r_hello hello.c)

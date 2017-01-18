project(a_message)

cmake_minimum_required(VERSION 2.8) # it is needed for  commend MAKE_DIRECTORY

message("How to use option.")

# cmake -DOPTION_B=ON
option(OPTION_A "OPTION A" ON)
option(OPTION_B "OPTION B" OFF)

set (build_dir ${CMAKE_BINARY_DIR}/build)
message(build_dir "build_dir: ${build_dir}")

if (OPTION_A STREQUAL "ON")
   message("Option A is turn ON")
else()
   message("Option A is turn OFF")
endif()

if (OPTION_B STREQUAL "ON")
   message("Option B is turn ON")
else()
   message("Option B is turn OFF")
endif()

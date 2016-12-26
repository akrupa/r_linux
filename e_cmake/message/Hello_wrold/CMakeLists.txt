project(a_message)

cmake_minimum_required(VERSION 2.8) # it is needed for  commend MAKE_DIRECTORY

message("Hello world!")
message("Run: cmake ./")

message("CMAKE_CURRENT_LIST_DIR: ${CMAKE_CURRENT_LIST_DIR}")
message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

message("CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")
message("CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")

set (build_dir ${CMAKE_BINARY_DIR}/build)
message(build_dir "build_dir: ${build_dir}")

if (NOT EXISTS ${build_dir})
    message( "Create directory: ${build_dir}")
    file(MAKE_DIRECTORY ${build_dir} )

endif()


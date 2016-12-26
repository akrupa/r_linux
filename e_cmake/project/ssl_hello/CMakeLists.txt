cmake_minimum_required (VERSION 2.8)

project(Hello)


#if(NOT DEFINED DIFF_TARGET)
#    set(DIFF_TARGET "current_system")
#endif()

#if(${DIFF_TARGET} STREQUAL "sol")
#    message("Cross compilation for solaris.")
#    include(toolchainForSol.cmake)
#else()
#    message("DDDDDDDDDDDDDD")
#endif()
find_package(OpenSSL REQUIRED) 
include_directories(${OPENSSL_INCLUDE_DIR})


add_executable(r_hello ssl_hello.c)
target_link_libraries(r_hello ${OPENSSL_LIBRARIES})

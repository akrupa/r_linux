
project(a_message)
cmake_minimum_required(VERSION 2.8)

message(STATUS "---message wiadomosc")
message(WARNING "message WARNING")
message(SEND_ERROR "message SEND_ERROR")
message(STATUS "---AND2 wiadomosc 2")
message(FATAL_ERROR "message FATAL_ERROR")

message(STATUS "---Will be never show.")
#status jest jakims poleceniem)

cmake_minimum_required(VERSION 3.7)
project(DHCP_server)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp dhcp.cpp dhcp.h)
add_executable(DHCP_server ${SOURCE_FILES})
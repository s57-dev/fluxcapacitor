cmake_minimum_required(VERSION 3.26)
project(fluxcapacitor)

set(CMAKE_CXX_STANDARD 17)

add_executable(fluxcapacitor main.cpp)
install(TARGETS fluxcapacitor DESTINATION bin) 


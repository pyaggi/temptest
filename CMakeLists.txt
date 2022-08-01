cmake_minimum_required(VERSION 3.14)

project(temptest LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library (liba SHARED liba.h liba.cpp)
add_library (libb SHARED libb.h libb.cpp)

link_directories( ${CMAKE_CURRENT_BINARY_DIR} )

add_executable(temptest main.cpp )
target_link_libraries(temptest liba libb)

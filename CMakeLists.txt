# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(Spreadsheet)

set(CMAKE_CXX_STANDARD 11)

# Set include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Source files
file(GLOB SOURCES
    ${CMAKE_SOURCE_DIR}/main.cpp
    ${CMAKE_SOURCE_DIR}/src/spreadsheet.cpp
    ${CMAKE_SOURCE_DIR}/include/spreadsheet.h
    ${CMAKE_SOURCE_DIR}/src/cell.cpp
    ${CMAKE_SOURCE_DIR}/include/cell.h
    ${CMAKE_SOURCE_DIR}/src/parser.cpp
    ${CMAKE_SOURCE_DIR}/include/parser.h
)

# Add executable
add_executable(spreadsheet ${SOURCES})


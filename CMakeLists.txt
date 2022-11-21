cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(PROJ_NAME "FindSubstring")
set(PROJ_PATH ${CMAKE_CURRENT_SOURCE_DIR})

project(${PROJ_NAME} CXX)

add_executable(${PROJ_NAME} main.cpp)

target_include_directories(${PROJ_NAME} PRIVATE ${PROJ_PATH}/include)
add_library(TestString include/TestString.cpp)
add_library(StringSearch include/StringSearch.cpp)
target_link_libraries(${PROJ_NAME} TestString StringSearch)

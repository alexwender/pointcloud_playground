cmake_minimum_required(VERSION 3.0.0)

project(pointcloud_playground)

set(CMAKE_CXX_STANDARD 11)

set(pc_pg_SRC "")

list(APPEND pc_pg_SRC src/storage/pointcloud.cpp)

set(pc_pg_HDR "")

list(APPEND pc_pg_HDR src/storage/pointcloud.h)

add_library(pc_pg ${pc_pg_SRC} ${pc_pg_HDR})

message(STATUS "CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

# include src directory

set(pc_pg_DIRS "")
list(APPEND pc_pg_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/src")

message(STATUS "pc_pg_DIRS: ${pc_pg_DIRS}")

INCLUDE_DIRECTORIES(${pc_pg_DIRS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# including testing file list
include(src/test/file_list.cmake)

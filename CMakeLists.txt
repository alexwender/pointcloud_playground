cmake_minimum_required(VERSION 3.0.0)

project(pointcloud_playground)

set(pc_pg_SRC "")

set(pc_pg_HDR "")

add_library(pc_pg ${pc_pg_SRC} ${pc_pg_HDR})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

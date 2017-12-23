# List of executables for testing

add_executable(test_pointclouds src/test/test_pointclouds)

target_link_libraries(test_pointclouds pc_pg)

cmake_minimum_required(VERSION 3.0)

set(target_name main)

add_executable(main main.cpp)

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../libcsc)
target_link_libraries(main matrix)

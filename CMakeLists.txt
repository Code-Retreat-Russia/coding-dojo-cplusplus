cmake_minimum_required(VERSION 3.31)
project(coding_dojo_cplusplus)

set (CMAKE_CXX_STANDARD 20)
set (Boost_USE_STATIC_LIBS OFF)

find_package (Boost REQUIRED COMPONENTS unit_test_framework)

include_directories (${Boost_INCLUDE_DIRS})

add_executable(coding_dojo_cplusplus hello_world.cpp hello_world.h hello_world_should.cpp)
target_link_libraries(coding_dojo_cplusplus ${Boost_LIBRARIES})

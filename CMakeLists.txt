cmake_minimum_required(VERSION 2.8.3)

project(rg2ft_lib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

catkin_package(
        INCLUDE_DIRS include       
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_library(RG2FT-lib
  src/rg2ft.cpp
)

target_link_libraries(RG2FT-lib
  ${catkin_LIBRARIES} 
)

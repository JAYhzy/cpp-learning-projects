cmake_minimum_required(VERSION 3.25)
project(CL_problem)

set(CMAKE_CXX_STANDARD 17)


add_executable( test  problem/11.cpp)
add_executable(fibonacci  problem/fibonacci.cpp )
add_executable( Tower_of_Hanoi  problem/Tower_of_Hanoi.cpp)
add_executable(bag problem/部分背包问题.cpp)
add_executable( BST/binary_search_tree.cpp)
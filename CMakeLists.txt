cmake_minimum_required(VERSION 3.23)
project(Leetcode_learning)

set(CMAKE_CXX_STANDARD 14)

add_executable(Leetcode_learning main.cpp)

add_executable(he-bing-liang-ge-pai-xu-de-lian-biao-lcof leetcode/editor/cn/he-bing-liang-ge-pai-xu-de-lian-biao-lcof.cpp leetcode/editor/cn/ListNode.h leetcode/editor/cn/doc/BinaryTree.h)
add_executable(shu-de-zi-jie-gou-lcof leetcode/editor/cn/shu-de-zi-jie-gou-lcof.cpp)
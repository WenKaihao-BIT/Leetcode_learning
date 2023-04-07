cmake_minimum_required(VERSION 3.23)
project(Leetcode_learning)

set(CMAKE_CXX_STANDARD 14)

add_executable(Leetcode_learning main.cpp)

add_executable(he-bing-liang-ge-pai-xu-de-lian-biao-lcof leetcode/editor/cn/he-bing-liang-ge-pai-xu-de-lian-biao-lcof.cpp leetcode/editor/cn/ListNode.h leetcode/editor/cn/BinaryTree.h)
add_executable(shu-de-zi-jie-gou-lcof leetcode/editor/cn/shu-de-zi-jie-gou-lcof.cpp)
add_executable(er-cha-shu-de-jing-xiang-lcof leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp)
add_executable(shun-shi-zhen-da-yin-ju-zhen-lcof leetcode/editor/cn/shun-shi-zhen-da-yin-ju-zhen-lcof.cpp)
add_executable(remove-element leetcode/editor/cn/remove-element.cpp)
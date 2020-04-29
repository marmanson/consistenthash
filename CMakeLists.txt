cmake_minimum_required(VERSION 3.8)
project(consistenthash)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp murmurhash3.h.h murmurhash3.cpp consistent_hash.h consistent_hash.cpp)
add_executable(consistenthash ${SOURCE_FILES})
cmake_minimum_required(VERSION 4.2)

project(smart-pointers LANGUAGES CXX)

add_subdirectory(deleting-pointer-twice)
add_subdirectory(memory-leak)
add_subdirectory(raw-pointer)
add_subdirectory(shared-pointer)
add_subdirectory(static-memory)
add_subdirectory(unique-pointer)
add_subdirectory(weak-pointer)
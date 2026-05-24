project(unique-pointer LANGUAGES CXX)

# makes sure c++11 is used
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(unique-pointer unique-pointer.cpp)
add_executable(unique-ptr-member-pointer unique-ptr-member-functions.cpp)
project(unique-pointer LANGUAGES CXX)

# makes sure c++11 is used
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cyclical-dependency-problem cyclical-dependency-problem.cpp)
add_executable(cyclical-dependency-solved cyclical-dependency-solved.cpp)
add_executable(weak-ptr-member-functions weak-ptr-member-functions.cpp)
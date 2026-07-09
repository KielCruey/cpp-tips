project(deleting-pointer-twice LANGUAGES CXX)

# makes sure c++11 is used
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(deleting-pointer-twice deleting-pointer-twice.cpp)
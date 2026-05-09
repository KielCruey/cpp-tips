project(testing-loop-logic LANGUAGES CXX)

# makes sure c++11 is used
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(testing-loop-logic testing-loop-logic.cpp)
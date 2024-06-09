cmake_minimum_required(VERSION 3.28)
project(ReTerm)

set(CMAKE_CXX_STANDARD 17)

add_executable(ReTerm main.cpp)

add_subdirectory(engine)

target_link_libraries(${PROJECT_NAME} engine)
target_link_libraries(${PROJECT_NAME} renderer)

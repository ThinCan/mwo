cmake_minimum_required(VERSION 3.2)
project(cicdtest)

add_executable(cicdtest main.cpp)
target_compile_definitions(cicdtest PRIVATE CICD_ASD=${CICD_ASD})
add_subdirectory(tests)
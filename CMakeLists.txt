cmake_minimum_required(VERSION 3.2)
project(cicdtest)

add_executable(cicdtest main.cpp)
target_compile_definitions(cicdtest PRIVATE ASD=${CICD_ASD})
add_executable(test_cicd test_cicd.cpp)
target_compile_definitions(test_cicd PRIVATE CICD_ASD=${CICD_ASD})
add_test(NAME cicd_test COMMAND test_cicd)
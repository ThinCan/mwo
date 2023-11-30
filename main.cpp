#include <iostream>

int main() {
    #ifdef CICD_ASD
    std::cout << CICD_ASD;
    #endif 
}
#include <iostream>

const int i =5;
const constexpr int *j = &i;

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.setf(std::ios::showpos);

    std::cout.precision(5);
    double i = 1;
    std::cout <<i<< std::endl;

    std::cout << *j << std::endl;

    
    return 0;
}
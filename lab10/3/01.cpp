#include <iostream>

int main() {
    int a = 6;
    int b = 3;
    int *p = &a; 

    int &ref = b; 

    int mult = a * b; 

    *p = 10; 

    int biA = a & b; 

    std::cout << "mult: " << mult << ", *p: " << *p 
              << ", ref: " << ref << ", biA: " << biA << std::endl;

    return 0;
}
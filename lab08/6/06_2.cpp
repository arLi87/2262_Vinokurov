#include <iostream>

int main() {
    int n1 = 5;
    std::cout << "for: ";
    for (int i = 0; i < n1; i++) {
        std::cout << i << " ";
        n1--;
    }
    std::cout << std::endl;

    int n2 = 5;
    std::cout << "forc: ";
    {
        int __i = 0, __n = n2;
        for (const int &i = __i; i < __n; __i++) {
            std::cout << i << " ";
            n2--;
        }
    }
    std::cout << std::endl;

    return 0;
}
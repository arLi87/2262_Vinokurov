#include <iostream>

int main() {
    std::cout << "for: ";
    for (int i = 0; i < 5; i++) {
        i += 1;
        std::cout << i << " ";
    }
    std::cout << std::endl;
    {
        int __i = 0, __n = 5;
        for (const int &i = __i; i < __n; __i++) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
#include <iostream>
#include <vector>

int main() {
    int x;
    bool found_negative = false;

    while (std::cin >> x) {
        if (x < 0) {
            std::cout << x << std::endl;
            found_negative = true;
            break;
        }
    }

    if (!found_negative) {
        std::cout << "Все числа неотрицательные" << std::endl;
    }

    return 0;
}
#include <iostream>

int main() {
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = x + 5;
    int *q = &x[5];

    std::cout << "Адрес p: " << p << std::endl;
    std::cout << "Адрес q: " << q << std::endl;

    if (p == q) {
        std::cout << "Адреса равны (разницы нет)" << std::endl;
    } else {
        std::cout << "Адреса различаются" << std::endl;
    }

    std::cout << "Значение *p: " << *p << std::endl;
    std::cout << "Значение *q: " << *q << std::endl;

    return 0;
}

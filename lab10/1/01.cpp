#include <iostream>

int main() {
    int a1 = 10, b1 = 20;
    int *p1 = &a1, *q1 = &b1;
    p1 = q1;
    std::cout << "Случай 1 (p = q):" << std::endl;
    std::cout << "Указатели (p1, q1): " << p1 << " " << q1 << std::endl;
    std::cout << "Значения (a1, b1): " << a1 << " " << b1 << std::endl;

    int a2 = 10, b2 = 20;
    int *p2 = &a2, *q2 = &b2;
    *p2 = *q2;
    std::cout << "Случай 2 (*p = *q):" << std::endl;
    std::cout << "Указатели (p2, q2): " << p2 << " " << q2 << std::endl;
    std::cout << "Значения (a2, b2): " << a2 << " " << b2 << std::endl;

    return 0;
}
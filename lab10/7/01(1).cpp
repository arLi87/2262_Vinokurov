#include <iostream>

int main() {
    std::cout << reinterpret_cast<int*>(3000) - reinterpret_cast<int*>(2000) << std::endl;
    return 0;
}

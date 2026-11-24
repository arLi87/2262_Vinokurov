#include <iostream>
#include <cstddef>

int main() {
    int x = 0;
    int *d = &x;
    std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;

    return 0;
}

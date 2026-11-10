#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);

    for (int &x : a) {
        std::cin >> x;
    }

    int last = a.back();
    for (int &x : a) {
        x += last;
    }

    int pos = 0, neg = 0;
    for (int x : a) {
        if (x > 0) {
            pos++;
        } else if (x < 0) {
            neg++;
        }
    }

    std::cout << "Положительно: " << pos << "\n";
    std::cout << "Отрицательно: " << neg << std::endl;

    return 0;
}
#include <iostream>

// Write your function here

int max(int a, int b, int c) {
    return a>b?a>c?a:c:b>c?b:c;
}

int main() {
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int suma = n * (n + 1) / 2;
    std::cout << "Suma pierwszych " << n << " liczb naturalnych to " << suma << '\n';
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int suma = 0;
    for (int i = 1; i <= n; i += 1)
        suma += i;
    std::cout << "Suma pierwszych " << n << " liczb naturalnych to " << suma << '\n';
}

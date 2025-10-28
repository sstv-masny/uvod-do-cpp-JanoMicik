
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    std::cout << "Zadaj cislo";

    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "even" << std::endl;

    } else {
        std::cout << "odd" << std::endl;
    }

    return 0;
}

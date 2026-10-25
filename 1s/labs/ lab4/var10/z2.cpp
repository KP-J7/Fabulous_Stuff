#include <iostream>
void main() {
    int n;
    std::cout << "Enter_number_N:"; std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            std::cout << j << " ";
        }
        std::cout << endl;
    }
}

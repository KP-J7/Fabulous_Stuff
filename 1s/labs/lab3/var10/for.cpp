#include <iostream>
int main() {
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;
    long long sum = 0; 
    std::cout << "Числа, удовлетворяющие условию: ";    
    for (int i = 21; i < N; ++i) {        
        if (i % 3 == 0 && (i % 10 == 2 || i % 10 == 4 || i % 10 == 8)) {
            sum += i;
            std::cout << i << " ";
        }
    }    
    std::cout << "\nСумма этих чисел: " << sum << std::endl;
}

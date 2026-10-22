#include <iostream>
int main() {
    int N;
    std::cout << "N=";
    std::cin >> N;
    long long sum = 0; 
    std::cout << "Numbers which meet to the condition: ";    
    for (int i = 21; i < N; ++i) {        
        if (i % 3 == 0 && (i % 10 == 2 || i % 10 == 4 || i % 10 == 8)) {
            sum += i;
            std::cout << i << " ";
        }
    }    
    std::cout << "Sum of theese numbers: " << sum << std::endl;
}

#include <iostream>
#include <cmath>
int main() {
    double x;
    int k;    
    std::cout << "x= ";
    std::cin >> x;
    std::cout << "k=";
    std::cin >> k;
    double Z = 1.0; 
    for (int n = 2; n <= k + 1; ++n) {
        double numerator = pow(x, n - 1);     // x^(n-1)
        double denominator = 2 * exp(n);      // 2*e^n
        Z *= (numerator / denominator);    
    }
    std::cout << "Z= "<<Z<<std::endl;    
}

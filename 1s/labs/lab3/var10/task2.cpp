#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    int k;    
    cout << "x= ";
    cin >> x;
    cout << "k=";
    cin >> k;
    double Z = 1.0; 
    for (int n = 2; n <= k + 1; ++n) {
        double numerator = pow(x, n - 1);     // x^(n-1)
        double denominator = 2 * exp(n);      // 2*e^n
        Z *= (numerator / denominator);    
    }
    cout << "Результат Z = " << Z << endl;    
    return 0;
}

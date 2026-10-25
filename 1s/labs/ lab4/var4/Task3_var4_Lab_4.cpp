#include <iostream>
#include <cmath>
using namespace std;
void main() {
    int m, n;
    cout << "Enter M: "; cin >> m;
    cout << "Enter N: "; cin >> n;
    for (int num = m; num <= n; ++num) {
        int sumDigits = 0;
        int temp = num;
        while (temp > 0) {
            sumDigits += temp % 10;
            temp /= 10;
        }
        
        int prod = 1;
        for (int i = 1; i <= sumDigits; ++i) {
            if (sumDigits % i == 0) {
                prod = (prod * i) % 10;
            }
        }

        if (prod == 4) {
            cout << num << " ";
        }
    }
}
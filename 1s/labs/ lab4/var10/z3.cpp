#include <iostream>
#include <cmath>
void main() {
    int m, n;
    cout << "Enter M: "; cin >> m;
    cout << "Enter N: "; cin >> n;
    for (int num = m; num <= n; ++num) {
        long long sum = 0;
        for (int i = 1; i <= num; ++i)
            if (num % i == 0) sum += i;
        
        int digits = 0;
        long long temp = sum;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }

        if (sum % digits == 0) {
            cout << num << " ";
        }
    }
}

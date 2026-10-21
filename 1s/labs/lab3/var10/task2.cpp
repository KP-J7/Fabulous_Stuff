#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    int k;
    
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение k: ";
    cin >> k;

    double Z = 1.0; // Инициализация произведения (нейтральный элемент для умножения)

    // Вычисление произведения от n=2 до k+1
    for (int n = 2; n <= k + 1; ++n) {
        double numerator = pow(x, n - 1);      // x^(n-1)
        double denominator = 2 * exp(n);       // 2*e^n
        Z *= (numerator / denominator);        // Умножаем на текущий член
    }

    cout << "Результат Z = " << Z << endl;
    
    return 0;
}
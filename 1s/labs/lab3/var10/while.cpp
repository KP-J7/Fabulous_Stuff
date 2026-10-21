#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    long long sum = 0;
    int i = 21; // Начальное значение (больше 20)
    cout << "Числа, удовлетворяющие условию: ";

    while (i < N) {
        // Проверка: кратно 3 И заканчивается на 2, 4 или 8
        if (i % 3 == 0 && (i % 10 == 2 || i % 10 == 4 || i % 10 == 8)) {
            sum += i;
            cout << i << " ";
        }
        i++; // Инкремент счетчика
    }
    
    cout << "\nСумма этих чисел: " << sum << endl;
    return 0;
}
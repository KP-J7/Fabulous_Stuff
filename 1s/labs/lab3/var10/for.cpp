#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    long long sum = 0; // Используем long long на случай больших сумм
    cout << "Числа, удовлетворяющие условию: ";

    // Числа должны быть больше 20 и меньше N
    for (int i = 21; i < N; ++i) {
        // Проверка: кратно 3 И заканчивается на 2, 4 или 8
        if (i % 3 == 0 && (i % 10 == 2 || i % 10 == 4 || i % 10 == 8)) {
            sum += i;
            cout << i << " ";
        }
    }
    
    cout << "\nСумма этих чисел: " << sum << endl;
    return 0;
}
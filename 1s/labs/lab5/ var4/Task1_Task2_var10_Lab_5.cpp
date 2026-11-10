#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;
void main() {
    srand(time(NULL));
    const int n = 15;
    int idk[n];

    for (int i = 0; i < n; ++i) {
        idk[i] = rand() % 1000;
        cout << idk[i] << " ";
    }
    // Task 1
    int x;
    cout << "Enter x:"; cin >> x;
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
        if (x != 0 && idk[i] % x == 0) {
            sum += idk[i];
        }
    }
    cout << "Sum_of_numbers " << x << ":" << sum << endl;
    // Task 2
    int max = 0;
    for (int i = 0; i < n; ++i) {
        if (idk[i] >= 100 && idk[i] <= 999) {
            if (idk[i] > max) {
                max = idk[i];
            }
        }
    }
    if (max == 0) {cout << "Max_three_digit_number:" << max << endl;}
    else {cout << "No_three_digit_number" << endl;}
}
#include <iostream>
using namespace std;
void main() {
    int n;
    cout << "Enter_number_N:"; cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}
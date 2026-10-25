#include <iostream>
using namespace std;
void main() {
    int n;
    cout << "Enter_number_N:"; cin >> n;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}
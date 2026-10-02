#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,a,b,c,d;
    cout<<"n=";
    cin>>n;
    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    if (a!=b&&b!=c&&c!=d){
        cout<<"The statement that all digits of this number are different is true";
    }else{
        cout<<"The statement that all digits of this number are different is false";
    }
}

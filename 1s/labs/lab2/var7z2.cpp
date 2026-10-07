#include <iostream>
#include <cmath>
int main() {
    int n,a,b,c,d;
    std::cout<<"n=";
    std::cin>>n;
    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    if (a!=b&&b!=c&&c!=d){
        std::cout<<"The statement that all digits of this number are different is true";
    }else{
        std::cout<<"The statement that all digits of this number are different is false";
    }
}

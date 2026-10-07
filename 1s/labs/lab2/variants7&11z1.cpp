#include <iostream>
#include <cmath>
int main() {
    double a,b,c,d;
    std::cout<<"a=";
    std::cin>>a;
    std::cout<<"b=";
    std::cin>>b;
    std::cout<<"c=";
    std::cin>>c;
    std::cout<<"d=";
    std::cin>>d;
    if (a<=b&&b<=c&&c<=d){
        a=d;
        b=d;
        c=d;
    }else if(a>b&&b>c&&c>d){}
     else{
        a*=a;
        b*=b;
        c*=c;
        d*=d;
     }
     std::cout<<"a="<<" "<<a<<" "<<"b="<<" "<<b<<" "<<"c="<<" "<<c<<" "<<"d="<<" "<<d<<endl;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,d;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    cout<<"d=";
    cin>>d;
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
     cout<<"a="<<" "<<a<<" "<<"b="<<" "<<b<<" "<<"c="<<" "<<c<<" "<<"d="<<" "<<d<<endl;
}

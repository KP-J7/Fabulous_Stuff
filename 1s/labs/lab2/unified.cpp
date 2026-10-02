#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of task:";
    cin>>n;
    switch (n){
        case 1:{
            double a1,b1,c1,d1;
            cout<<"a=";
            cin>>a1;
            cout<<"b=";
            cin>>b1;
            cout<<"c=";
            cin>>c1;
            cout<<"d=";
            cin>>d1;
            if (a1<=b1&&b1<=c1&&c1<=d1){
                a1=d1;
                b1=d1;
                c1=d1;
            }else if(a1>b1&&b1>c1&&c1>d1){}
            else{
                a1*=a1;
                b1*=b1;
                c1*=c1;
                d1*=d1;
                }
            cout<<"a="<<" "<<a1<<" "<<"b="<<" "<<b1<<" "<<"c="<<" "<<c1<<" "<<"d="<<" "<<d1<<endl;
            break;}
        case 2:{
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
            break;}
        case 3:{
            int y=19;
            double x=1.95,z=-3.26;
            double t;
            double u;
            t = t = 1 + x + (pow(x, 2) / 2) - (pow(x, 3) / 3); u = exp(x * z) + (sqrt(y / x));
            if (t>u){
                cout<<"True";
            }else if (u>t){
                cout<<"False";
            }
            break;}
        default:
            cout<<"You have entered the wrong number!";
            break;
    }
}

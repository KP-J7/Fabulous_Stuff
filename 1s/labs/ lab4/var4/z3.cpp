#include <iostream>
#include <cmath>
void main() {
    int m,n;
    std::cout<<"m="; 
    std::cin>>m;
    std::cout<<"n="; 
    std::cin>>n;
    for (int num=m; num<=n; num++) {
        int sumDigits=0;
        int tmp=num;
        while (tmp>0) {
            sumDigits+= tmp%10;
            tmp/=10;
        }        
        int prod = 1;
        for (int i=1; i<=sumDigits; i++) {
            if (sumDigits%i==0){
                prod=(prod*i)%10;
            }
        }
        if (prod==4) {
            std::cout<<num<< " ";
        }
    }
}

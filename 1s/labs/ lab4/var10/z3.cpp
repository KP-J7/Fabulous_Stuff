#include <iostream>
#include <cmath>
void main() {
    int m, n;
    std::cout << "m=";
    std::cin>>m;
    std::cout<<"n=";
    std::cin>>n;
    for (int num=m; num<=n; num++) {
        long long sum=0;
        for (int i=1; i<=num; i++)
            if (num%i==0)
                sum+=i;        
        int digits=0;
        long long tmp= um;
        while (tmp>0){
            tmp/=10;
            digits++;
        }
        if (sum%digits==0) {
            std::cout<<num<< " ";
        }
    }
}

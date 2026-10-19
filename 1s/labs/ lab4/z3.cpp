#include <iostream>
int main() {
    int m,n;
    std::cout << "m=";
    std::cin>>m;
    std::cout << "n=";
    std::cin>>n;
    for (int d=m; d<=n;d++) {
        int sd=0;
        for (int i=1; i<=d/2; i++) {
            if (d%i==0) {
                sd+=i;
            }
        }
        int tmp=d;
        int s=0;
        while (tmp>0) {
            s += tmp % 10;
            tmp/= 10;
        }
        if (sd%s==0) {
            std::cout<<d<<std::endl;
        }
    }
}

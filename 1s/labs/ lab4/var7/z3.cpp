#include <iostream>
int main() {
    int m,n;
    std::cout << "m=";
    std::cin>>m;
    std::cout << "n=";
    std::cin>>n;
    for (int i=m; i<=n;i++) {
        int sd=0;
        for (int j=1; j<=i/2; j++) {
            if (i%j==0) {
                sd+=j;
            }
        }
        int tmp=i;
        int s=0;
        while (tmp>0) {
            s+=tmp%10;
            tmp/=10;
        }
        if (sd%s==0){
            std::cout<<i<<std::endl;
        }
    }
}

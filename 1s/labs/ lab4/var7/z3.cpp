#include <iostream>
using namespace std;
int main() {
    int m, n;
    cout<<"M=";
    cin>>m;
    cout<<"N=";
    cin>>n;
    for (int k = m; k <= n;k++) {
        int sum_div = 0;
        for (int i=1; i*i<=k;i++) {
            if (k%i == 0) {
                sum_div += i;
                if (i!=k/i) {
                    sum_div+=k/i;
                }
            }
        }
        int tmp=k;
        int sum_digits=0;
        while(tmp>0) {
            sum_digits+=tmp%10;
            tmp/=10;
        }
        if (sum_div%sum_digits==0) {
            cout <<k<<endl;
        }
    }
}

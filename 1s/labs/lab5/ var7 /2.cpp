#include <iostream>
#include<cmath>
using namespace std;
int main(){
    srand(time(0));
    int n,i;
    int a[n];
    cin>>n;
    int k=0;
    for (int i=0;i<n;i++)
        a[i]=rand()%100+1;
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
    for (int i=0; i<n;i++)
        if ((a[i]>=10)&&(a[i]<=99))
            k+=1;
    cout<<"The quantity of even numbers is:"<<k;
    return 0;
}

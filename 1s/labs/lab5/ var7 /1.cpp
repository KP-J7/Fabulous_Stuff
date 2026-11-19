#include <iostream>
using namespace std;
int main(){
    srand(time(0));
    int n;
    int a[n];
    cin>>n;
    for (int i=0;i<n;i++)
        a[i]=rand()%100+1;
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

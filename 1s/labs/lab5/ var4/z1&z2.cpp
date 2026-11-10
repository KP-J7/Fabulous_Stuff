#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
void main() {
    srand(time(0));
    const int n=15;
    int idk[n];
    for (int i=0; i n;i++) {
        idk[i]= rand() % 1000;
        std::out<<idk[i]<<" ";
    }
    /*z1*/
    int x;
     std::cout <<"x=";  std::cin>>x;
    long long sum = 0;
    for (int i=0; i<n; i++) {
        if (x!=0 && idk[i]%x==0) {
            sum+=idk[i];
        }
    }
     std::cout<<"Sum of numbers "<<x << ":" <<sum<<std::endl;
    /*z2*/
    int max=0;
    for (int i=0; i<n;i++) {
        if ((idk[i]>=00)&&(idk[i]<=999)) {
            if (idk[i]>max) {
                max = idk[i];
            }
        }
    }
    if (max==0)
        std::cout<<"Max three-symbol number:"<<max<<endl;
    else
        std::cout<<"No three-symbol number"<<std::endl;
}

#include <iostream>
int main() {
    int n,i,j;
    std::cout<<"n="<<" ";
    std::cin>>n;
    for (int i=n; i>=1; i--){
        for (int j=i; j>=1; j--){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}

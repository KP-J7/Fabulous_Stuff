#include <iostream>
void main() {
    int n;
    std::cout<<"n=:"; 
    std::cin>>n;
    for (int i=n; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}

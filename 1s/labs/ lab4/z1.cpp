#include <iostream>
int main() {
    int n;
    start:
    std::cout<<"Do you like programming?(1-yes/2-no)"<<std::endl;
    std::cin>>n;
    if (n==1){
        std::cout<<"You're cool guy!";
    }else if (n==2){
        std::cout<<"Yore're bad guy!";
    }else {
        std::cout<<"Error.Please, enter the right number"<<std::endl;
        goto start;
    }
}

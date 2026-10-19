#include <iostream>
int main() {
    int n;
    start:
    std::cout<<"Do you like programming? (yes-1/no-2)"<<" "<<std::endl;
    std::cin>>n;
    if (n==1)
        std::cout<<"You're cool!";
    else if (n==2)
        std::cout<<"You're bad guy!";
    else{
        std::cout<<"Error.Please, enter the correct number";
        goto start;}

}


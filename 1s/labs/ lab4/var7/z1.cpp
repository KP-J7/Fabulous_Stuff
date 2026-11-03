#include <iostream>
int main() {
    int n,age,k;
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
    std::cout<<"How old were you when you wrote your first code?"<<std::endl;
    std::cin>>age;
    if (age<13){
            std::cout<<"You're lucky!";}
     else if (13<=k<=50){
            std::cout<<"Oh! It's usual for all programmers!";}
     else{
            std::cout<<"You're amazing!";
    }
    std::cout<<"What is your favorite programming language?"<<std::endl;
    std::cout<<"(1-C++,2-C,3-Kotlin,4-Java,5-Python,6-Rust,7-C#,8-JavaScript,9-PHP,10-Go,11-R,12-Fortran,13-Perl,14-Ruby,15-Scala"<<std::endl;
    std::cin>>n;
}

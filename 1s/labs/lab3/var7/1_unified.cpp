#include <iostream>
int main() {
    int i;
    for (int i=1000;i<=9999;i++){
        if ((i%133==125)&&(i%134==111))
            std::cout<<i<<std::endl;/*1987*/
    }
    int ic,n;
    ic=1000;
    n=10000;
    while (ic<n){
        if ((ic%133==125)&&(ic%134==111))
            std::cout<<ic<<std::endl;/*1987*/
        ic++;
   }
}

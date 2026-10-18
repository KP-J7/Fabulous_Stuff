#include<iostream>
int main(){
   int i;
   for (int i=1000;i<=9999;i++){
        if ((i%133==125)&&(i%134==111))
            std::cout<<i<<std::endl;/*1987*/
   }
}

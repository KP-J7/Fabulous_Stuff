#include<iostream>
int main(){
   int i,n;
   i=1000;
   n=10000;
   while (i<n){
        if ((i%133==125)&&(i%134==111))
            std::cout<<i<<std::endl;/*1987*/
        i++;
   }
}

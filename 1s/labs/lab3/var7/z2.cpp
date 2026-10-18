#include<iostream>
#include<cmath>
int main(){
   int k,s=0,n;
   double x;
   std::cout<<"k=";
   std::cin>>k;
   std::cout<<"x=";
   std::cin>>x;
   for (n=1;n<=k+1;n++){
        s+=(sin(2*n-1)*pow(x,n));
   }
   std::cout<<"Sum="<<" "<<s;
}

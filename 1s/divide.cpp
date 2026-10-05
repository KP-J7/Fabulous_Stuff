#include<iostream>
using namespace std;
int main(){
  int n=1024;
  int k=0,s=0,p=1;
  for (int d=1,d<=n,d++)
    if (n%d==0){
        k++;
        s+=d;
        p+=d;
  }
}

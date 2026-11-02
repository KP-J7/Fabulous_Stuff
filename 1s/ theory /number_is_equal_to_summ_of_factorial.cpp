void main(){
  int n=1000;
  for (int i=1;i<=n;i++){
    int a=1;s=0;
    while (a>0){
      int digit=a%10;
      a/=10;
      int f=1;
      for (int j=2;j<digit;j++)
        f*=j;
      s+=f;
    if (s==i) cout<<i<<" ";
    }
  }
}

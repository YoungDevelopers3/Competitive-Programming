#include<bits/stdc++.h>
using namespace std;
int Fibo(int n){
    int result =0;
    if(n==0){
       result=0;
       return result; 
    }
    if(n==1){
      result=1;
      return result;
    }
    result=Fibo(n-1)+Fibo(n-2);
    return result;
}

int main(){
  int n=0;
  cin>>n;
  cout<<Fibo(n);
}

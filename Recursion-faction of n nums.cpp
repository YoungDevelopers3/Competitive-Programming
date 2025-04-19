#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
int result=0;
 if(n<=0){
     result=1;
     return result;
 }   
 result=n*fibo(n-1);   
 return result;
}


int main(){
 int n=0;
 cin>>n;
 cout<<fibo(n);
    
    
    
}

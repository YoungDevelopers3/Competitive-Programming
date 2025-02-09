#include<bits/stdc++.h>
using namespace std;
int F[51];
int Fib(int n){
    if(n<=1){
        return n;
    }
    if(F[n]!=-1){
        return F[n];
    }
    else{
        return Fib(n-1)+Fib(n-2);
    }
    
}
int main(){
    
    for(int i=0;i<51;i++){
        F[i]=-1;
    }
    int n=0;
    cin>>n;
    cout<<Fib(n);
}




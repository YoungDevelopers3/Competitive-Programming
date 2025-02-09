#include<bits/stdc++.h>
using namespace std;
int Fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return Fib(n-1)+Fib(n-2);
    }
    
}
int main(){
    int n=0;
    cin>>n;
    cout<<Fib(n);
}

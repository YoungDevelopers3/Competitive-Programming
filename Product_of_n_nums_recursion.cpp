#include<bits/stdc++.h>
using namespace std;
int product(int n){
if(n==1){
    return n;
}
else{
    return n*product(n-1);
}

    
}

int main(){
int n=0;
cin>>n;
cout<<product(n);
    
    
}

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){
        return n;
    }
    else{
        return sum(n-1)+n;
    }
}


int main(){
    int n=0;
    cin>>n;
    int result=sum(n);
    cout<<result;
    
}

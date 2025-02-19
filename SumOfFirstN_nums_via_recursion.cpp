#include<bits/stdc++.h>
using namespace std;
int sum(int i,int n){
    if(i>n){
        return 0;
    }
    return i+sum(i+1,n);
}

int main(){
int i=0;
int n=3;
cout<<sum(i,n);
}

#include<bits/stdc++.h>
using namespace std;
void name(int c,string &s,int n){
    if(c==n){
        return;
    }
    cout<<"Deepak"<<endl;
    name(c+1,s,n);

}
int main(){
    int c=0;
    string s ="Deepak";
    int n=10;
    name(c,s,n);
    

}

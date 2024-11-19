#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    if(s.length()==9 && isupper(s[2]) && s[2]!='A' && s[2]!='E' && s[2]!='I' && s[2]!='O' && s[2]!='U'){
        int s01=(s[0]-'0')+(s[1]-'0');
        int s34=(s[3]-'0')+(s[4]-'0');
        int s45=(s[4]-'0')+(s[5]-'0');
       // int s57=(s[5]-'0')+(s[7]-'0');
        int s78=(s[7]-'0')+(s[8]-'0');

        if(s01 % 2==0 && s34 % 2==0 && s45 % 2==0 &&   s78 % 2==0){
            cout<<"valid";
        }
        else{
            cout<<"invalid";
        }
    }
    else{
        cout<<"invalid";
    }
}

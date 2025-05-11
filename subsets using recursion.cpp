#include<bits/stdc++.h>
using namespace std;
void generateSubsets(string str,string& ot ){
if(str.size()==0){
    cout<<ot<<endl;
    return;
}
string op1=ot;
string op2=ot+str[0];
str.erase(str.begin()+0);
generateSubsets(str,op1);
generateSubsets(str,op2);

}
int main(){

string str;
getline(cin,str);
string ot="";
generateSubsets(str,ot);

}

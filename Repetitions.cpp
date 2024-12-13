#include<bits/stdc++.h>
using namespace std;
int main(){
string dna;
getline(cin,dna);
int ct=1;
int max_ct=1;
char ch=dna[0];
for(int i=1;i<dna.length();i++){
    
    if(ch==dna[i]){
        ct++;
    }
    else{
        max_ct=max(max_ct,ct);
        ct=1;
        ch=dna[i];
    }
}
max_ct=max(ct,max_ct);
cout<<max_ct;


}
#include<bits/stdc++.h>
using namespace std;
void reverse(string &name,int i,int j){
     
    cout<<"call received for "<<name<<endl;
    if(i<j){ 
    swap(name[i],name[j]);
    i++;
    j--;
    
    reverse(name,i,j);
    }
    else{
        return;
    }
   
    
}
int main(){
    string name;
    cin>>name;
    int i=0,j=name.length()-1;
    reverse(name,i,j);
    cout<<name;
}

#include<bits/stdc++.h>
using namespace std;

string rev(int i,int j,string& str){
      
    swap(str[i],str[j]);
    i++;
    j--;
  if(i<j){  
      rev(i,j,str);
  }  
  return str;  
}

int main(){
   string str;
   cin>>str;
   int i=0,j=str.length()-1;
   cout<<rev(i,j,str); 
}

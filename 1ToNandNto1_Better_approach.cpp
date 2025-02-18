/*1 to N*/
#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n){
        return; 
    }
    cout<<i<<endl;
    print(i+1,n); 
} 
int main(){
 int i=1,n=10;
 print(i,n);
  
 
}

/*N to 1*/

#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    print(i-1,n);
}
int main(){
 int n=20;
 int i=n;
 print(i,n);
}

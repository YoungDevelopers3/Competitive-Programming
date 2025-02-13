#include<bits/stdc++.h>
using namespace std;
void print(int n){
 if(n==0){
     return;
 }   
cout<<n<<endl;
print(n-1);
}
int main(){
 int n=0;
 cin>>n;
 print(n);
}
/*Time Complexity O(n)
Space Complexity O(n)*/

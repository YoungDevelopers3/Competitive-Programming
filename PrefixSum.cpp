#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int prefixSum[0]=arr[0];
   for(int i=1;i<n;i++){
       prefixSum[i]=prefixSum[i-1]+arr[i];
   }
   int l=0,r=0;
   cin>> l>>r;
   int sum=prefixSum[r]-prefixSum[l-1];
   cout<<sum;

}

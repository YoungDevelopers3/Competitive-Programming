#include<bits/stdc++.h>
using namespace std;
int main(){
int n=0;
cin>>n;
int arr[n]={0};
long long int current_sum=0,max_sum=INT_MIN;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i:arr)
{
    current_sum=current_sum+i;
    max_sum=max(current_sum,max_sum);
    if(current_sum<0){
        current_sum=0;
    }
}
cout<<max_sum;




}
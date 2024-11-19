#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n;
    cin>>n;
    long long int arr[n];
    long long int product=1;
    for(int i=0;i<n;i++){
       cin>>arr[i];
       product=(product*arr[i])%(1000000000+7);
    }
    cout<<product;
}

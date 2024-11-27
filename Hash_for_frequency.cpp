#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int N=1e7+10;
    cin>>n;
    int hsh[N];
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    int q=0;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;

    }

}

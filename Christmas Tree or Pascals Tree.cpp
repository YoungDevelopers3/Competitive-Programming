#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        for(int i=0;i<n;i++){
            long long int value=1;
            for(int j=0;j<=i;j++){
                cout<<value<<" ";
                value=value *(i-j)/(j+1);
            }
            cout<<endl;
        }
    }
}

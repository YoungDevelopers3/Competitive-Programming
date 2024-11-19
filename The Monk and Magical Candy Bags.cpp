#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
    multiset< long long int>m;
      int n=0,k=0;
      long long int sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
           long long int candy;
            cin>>candy;
            m.insert(candy);
        }
        for(int i=0;i<k;i++){
            auto it=(--m.end());
           long long int big_candy=*it;
            sum=sum+big_candy;
            m.erase(it);
            m.insert(big_candy/2);
            
            
        }
         cout<<sum<<endl;
        
    }
}
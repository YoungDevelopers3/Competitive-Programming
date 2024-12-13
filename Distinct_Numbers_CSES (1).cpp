#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    set<int>s;
   
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        v.push_back(num);
    }

    for(int i:v){
        s.insert(i);
    }
    cout<<s.size();

}
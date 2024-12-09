#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,2,3,4,5};
vector<int>result(v.size(),-1);//decalaring each element as -1 to prevent any random output while accessing this array.
stack<int>s;
int n=v.size();
for(int i =n-1;i>=0;i--){
    while(!s.empty() && v[i]>s.top()){
        s.pop();
    }
    if(!s.empty()){
        result[i]=s.top();
    }
    s.push(v[i]);
}

for(int num:result){
    cout<<num<<" ";
}

}

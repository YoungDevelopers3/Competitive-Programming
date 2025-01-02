#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0;
cin>>t;
while(t--){
int n=0;
cin>>n;
vector<int>v;
stack<int>s;
vector<int>result;
for(int i=0;i<n;i++){
int num=0;
cin>>num;
v.push_back(num);
}
for(int i=0;i<n;i++){
	while(!s.empty() && v[i]>=s.top()){
        s.pop();
    }
    s.push(v[i]);
	result.push_back(s.size());
}
for(int x:result){
	cout<<x<<" ";
}
cout<<endl;

}



}
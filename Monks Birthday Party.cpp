#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n=0;
		cin>>n;
		set<string>names;
		for(int i=0;i<n;i++){
			string name;
			cin>>name;
			names.insert(name);
		}
		for(string i:names){
			cout<<i<<endl;
		}
	}
}
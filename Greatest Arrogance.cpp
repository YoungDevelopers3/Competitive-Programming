#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int N=s.length();
	char mx=s[0];
	for(int i=0;i<N;i++){
         if(s[i]>mx){
			mx=s[i];
		 }
	}
	cout<<mx;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int k;
	cin>>s>>k;
	int l=s.length();
	 
     while(k--){
		char lastch=s[l-1];
		string temp="";
		// s = abcde 
		// temp = ""
		temp+=lastch;
		// temp = "e" + abcd = eabcd 
		// for(int i=0;i<l-1;i++){
		// 	temp = temp+s[i];
		// }
		temp = temp + s.substr(0, l-1);
		s = temp;  // eabcd 
		// for(int i=l-1;i>0;i--){
		// 	temp+=s[i-1];
		// }
	 }
	 cout<<s;
}

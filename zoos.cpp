#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int x=0;
	int y=0;

	cin>> s;
	if(s.length()<=20 && (s[0]=='z'||s[0]=='Z')){
for(char i:s){
		if(i=='z'|| i=='Z'){
			x++;
		}
		else if(i=='o'||i=='O'){
			y++;
		}
	}
	if(y==(2*x)){
		cout<<"Yes";
	}
	}
	
}

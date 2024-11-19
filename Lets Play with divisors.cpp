#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,d=0;
		cin>>N;
		for(int i=1;i<=N;i++){
			if(N%i==0){
				d++;
			}
		}
		cout<<d<<endl;
	}
	
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int L,W,H,n;
	cin>>L;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>W>>H;
		if(W<L || H<L){
			cout<<"UPLOAD ANOTHER"<<endl;
		}
		else{
			if(W==H){
				cout<<"ACCEPTED"<<endl;
			}
			else{
				cout<<"CROP IT"<<endl;
			}
		}
	}

}

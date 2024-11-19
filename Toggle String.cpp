#include<iostream>
using namespace std;
int main(){
	string S;
	
	cin>>S;
	if(S.size()>=1 && S.size()<=100){
		for(int i=0;i<S.size();i++){
	        
			 if(S[i]>='A' && S[i]<='Z'){
				 S[i]=S[i]+32;
			 }
			 else{
				 S[i]=S[i]-32;
			 }		
		}
        cout<<S;
        
	}
}

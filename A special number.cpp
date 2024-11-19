#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n=0,d=0,sum=0,org=0;
		cin>>n;
		org=n;
		while(org>0){ 
         d=org%10; 
		 sum=sum+d;
		 org=org/10;
		}

		while(true){
			
		if(sum%4==0){
			cout<<n<<endl;     
			break;
		}
		else{
			sum=0;
			n++; 
			int x = n;
			while(x>0){     
            d=x%10;  
		    sum=sum+d; 
		    x=x/10;  
		}
}
		}

	}
}
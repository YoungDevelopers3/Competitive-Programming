#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define deepak long long int // macro
int main() {
	deepak tc;

	cin>>tc;


// dikkat with runtime error is 10^7 
	vector<deepak>precompute(10000001,0); // 
	// memset(precompute, 0, sizeof(precompute));

	for(int i=0;i<=10000000;i++){
		if(i==0||i==1||i==2){
			precompute[i] = 1;
		}
		else{
			precompute[i] = ((precompute[i-1]%mod) + (precompute[i-3]%mod))%mod;
		}
		// if(i<=10)
		// cout<<precompute[i]<<" ";
	}

	while(tc--){
	deepak num;
	cin >> num;  
	// cout<<num<<"\n"; 
	cout<<precompute[num]<<"\n";
	}
}

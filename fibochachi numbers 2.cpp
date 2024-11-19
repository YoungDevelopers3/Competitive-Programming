#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int tc;
	cin>>tc;

	long long int precompute[91];
	memset(precompute, 0, sizeof(precompute));

	for(int i=0;i<=90;i++){
		if(i==0||i==1||i==2||i==3||i==4){
			precompute[i] = 1;
		}
		else{
			precompute[i] = precompute[i-1] + precompute[i-3] + precompute[i-5];
		}
	}

	while(tc--){
	long long int num;
	cin >> num;   
	cout<<precompute[num]<<"\n";
	}
}

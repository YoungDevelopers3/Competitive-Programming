#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,fact=1;
	cin>>n;
	for(int i=1;i<=n;i++){
         fact=fact*i;
	}
	cout<<fact;
}

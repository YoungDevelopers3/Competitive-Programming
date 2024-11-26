#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
	cin>>t;
	
	while(t--){
		int n=0,counter=0;
		cin>>n;
        int arr[n];
		for(int i=0;i<n;i++){
			cin>> arr[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(i<j && arr[i]==arr[j]){
					counter++;
				}
			}
		}
		cout<<counter<<endl;
	}
  
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,num,d;
	//long temp=0;
	cin>>n;
	int arr[n];
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		num=arr[i];
		d=num%10;
		arr1[i]=d;
	}
	if(arr1[n-1]==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	// for(int j=0;j<n;j++){
	// 	temp=temp+arr1[j]*pow(10,n-j-1);

	
	// }
     

	//cout<<temp;
     //if (temp%10==0){
		//cout<<"Yes";
	 //}
	 //else{
		//cout<<"No";
	 //}
	

}

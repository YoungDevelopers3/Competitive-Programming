#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,min,max;
	cin>>n;
	int Arr[n];
	for(int i=0;i<n;i++){
		cin>>Arr[i];
	}
	
    int k = n-1;
   while(k--){

	min=INT_MAX;  /// max possible integer 
	// min = INT_MIN
	for(int i=0;i<n;i++){
		if(min>Arr[i] and Arr[i]>0){
			min=Arr[i];
		}
		
	}
	// 4 ->3 ->2 
       for(int i=0;i<n;i++){
           Arr[i]=Arr[i]-min;
       }
   }
     max=INT_MIN;
   for(int i=0;i<n;i++){
	   if(max<Arr[i]){
		max=Arr[i];
	   }
			
	}
	cout<<max;
    
}

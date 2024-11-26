#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0;
	cin>>t;
    
	while(t--){
        vector<int> arr;
        int n=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int num=0;
            cin>>num;
            arr.push_back(num);
        }
		for(int i=0;i<n;i++){
               int sum=0;
             for(int j=0;j<=i;j++){
                   sum=sum+arr[j];
               }
              cout<<sum<<" ";
           }
		cout<<endl;
	    }   
       
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int test=0;
	
	cin>>test;
	
		
		while(test--){
			int cost_green=0;
	        int cost_purple=0;
	        int n=0;
	
	        cin>>cost_green>>cost_purple;
	        cin>>n;
			int arr[n][2];
			
			int green=0;
			int purple=0;
              for(int i=0;i<n;i++){
				cin>>arr[i][0]>>arr[i][1];

                 if(arr[i][0]==1){
                     green++;
					 
			      }
			     if(arr[i][1]==1){
					 purple++;
			     }
		//cout<<arr[i][0]<<" "<<arr[i][1]<<" "<<green<<" "<<purple<<"\n";
			}
			
			
			int possibility1=(green*cost_green)+(purple*cost_purple);
			int possibility2=(green*cost_purple)+(purple*cost_green);

			
			//cout<<"possibility1"<<possibility1<<endl;
			//cout<<"possibility2"<<possibility2<<endl;
			int total=min(possibility1,possibility2);
			cout<<total<<endl;
			
			
		}
		
	

}

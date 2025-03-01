#include<bits/stdc++.h>
using namespace std;
void subs(int index,vector<int>& subset,vector<int>& arr,vector<vector<int>>& subsets,int N){
    if(index==N){
        subsets.push_back(subset);
        return;
    }
    //Selecting the element
    subset.push_back(arr[index]);
   subs(index+1,subset,arr,subsets,N);
   subset.pop_back();//Removing the element
   subs(index+1,subset,arr,subsets,N);
}

int main(){
vector<int>arr={1,2,3};
vector<int>subset;
vector<vector<int>>subsets;
int N=arr.size();
int index=0;
subs(index,subset,arr,subsets,N);

for(int i=0;i<subsets.size();i++){
    cout<<"{ ";
    for(int j=0;j<subsets[i].size();j++){
        
        cout<<subsets[i][j]<<" ";
        
    }
    cout<< " }"<<endl;
}


}

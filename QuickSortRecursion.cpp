#include<bits/stdc++.h>
using namespace std;

int partitionIndex(vector<int>& arr,int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    
    while(i<j){
        
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        
        if(i<j){
            swap(arr[i],arr[j]);
        }
        
    
    }
    swap(arr[low],arr[j]);
    return j;
    
}

void qs(vector<int>& arr,int low,int high){
    if(low<high){
       int p_index=partitionIndex(arr,low,high);
       qs(arr,low,p_index-1);
       qs(arr,p_index+1,high); 
    }
   
}
int main(){
    vector<int>arr={4, 6, 2, 5, 7, 9, 1, 3};
    qs(arr,0,arr.size()-1);
    for(int i:arr){
        cout<<i<<" ";
    }

}

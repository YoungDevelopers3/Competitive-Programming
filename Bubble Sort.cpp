#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
  int arr[]={5,3,8,4,2};
 int n=sizeof(arr)/sizeof(arr[0]);
  BubbleSort(arr,n);

for(int i:arr){
    cout<<i<<" ";
}
}
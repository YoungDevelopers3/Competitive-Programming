#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){//loop till n-1 because the last element left will automatically be the largest one
        int i_min=i;
        for(int j=i+1;j<n;j++){ //using j=i+1, because now we are gping to check the unsorted array again 
                                   //so we have proceed to the next element , not first one otherwise will be checking the first element
            if(arr[j]<arr[i_min]){
                i_min=j;
            }
            int temp=arr[i];     //as the min element is found on index i now we have swap its value with element present
                                 // at the respective place so that the element found is according to ascending or descending order
            arr[i]=arr[i_min];
            arr[i_min]=temp;

        }
    }
}



int main(){
   int arr[]={9,5,7,2,1,6,3};
   int n=7;
   SelectionSort(arr,n);
   for(int i:arr){
       cout<<i<<" ";
   }
}
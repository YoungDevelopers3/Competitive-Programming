class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(arr[0]>arr[1]){
            return 0;
        }
        if(arr[n-1]>arr[n-2]){
            return n-1;
        }
        int low=1,high=n-2;
        int result=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                result= mid;
                break;
            }
            else if(arr[mid-1]<arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return result;



    }
};
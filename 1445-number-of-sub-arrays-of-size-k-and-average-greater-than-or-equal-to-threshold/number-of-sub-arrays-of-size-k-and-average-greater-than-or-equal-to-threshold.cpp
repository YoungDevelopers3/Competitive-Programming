class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0,right=0,counter=0;
        long long sum=0;
        while(right<arr.size()){
            sum=sum+arr[right];
            if(right-left+1<k){
                right++;
            }
            else if(right-left+1==k){
                if(sum/k>=threshold){
                    counter++;
                }
                sum=sum-arr[left];
                left++;
                right++;
            }
            else{
                left++;
            }
        }
        return counter;
    }
};
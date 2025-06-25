// User function Template for C++

class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        int sum=0;
        for(int i=0;i<n-2;i++){
            int l=i+1,h=n-1;
            while(l<h){
               int current_sum=arr[i]+arr[l]+arr[h];
                if(current_sum==target){
                    return target;
                }
                else if(abs(target-current_sum)<diff){
                    diff=abs(target-current_sum);
                    sum=current_sum;
                }
                else if(abs(current_sum-target)==diff){
                    sum=max(current_sum,sum);
                }
                if(current_sum<target){
                    l++;
                }
                else{
                    h--;
                }
            }
        }
        return sum;
        
    }
};
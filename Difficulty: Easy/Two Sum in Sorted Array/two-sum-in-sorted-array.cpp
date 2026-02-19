class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int l=0,r=arr.size()-1;
        vector<int>ans={-1,-1};
        while(l<r){
            if(arr[l]+arr[r]==target){
                ans[0]=l+1;
                ans[1]=r+1;
                break;
            }
            else if(arr[l]+arr[r]>target){
                r--;
            }
            else{
                l++;
            }
        }
        //sort(ans.begin(),ans.end());
        return ans;
    }
};
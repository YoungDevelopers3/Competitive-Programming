class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0,j=k-1;
        vector<int>ans;
        while(j<n){
            if(j-i+1>k){
                i++;
            }
            while(i<=j && arr[i]>=0){
                i++;
            }
            if(i>j){
                ans.push_back(0);
            }
            else{
                ans.push_back(arr[i]);
            }
            j++;
            
        }
        return ans;
        
        
    }
};
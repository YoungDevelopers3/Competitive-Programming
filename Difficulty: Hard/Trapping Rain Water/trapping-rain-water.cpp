class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        vector<int>left_m(n);
        vector<int>right_m(n);
        
        left_m[0]=arr[0];
        
        right_m[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++){
            left_m[i]=max(left_m[i-1],arr[i]);
        }
        
        for(int i=n-2;i>=0;i--){
            right_m[i]=max(right_m[i+1],arr[i]);
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            ans=ans+(min(left_m[i],right_m[i])-arr[i]);
        }
        
        return ans;
        
        
        
        
        
        
        
    }
};
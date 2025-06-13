class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        vector<int>ans={-1,-1};
        auto it=std::find(arr.begin(),arr.end(),x);
        if(it==arr.end()){
            return ans;
        }
        auto lo=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        auto up=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        ans[0]=lo;
        ans[1]=up-1;
        return ans;
        
        
        
        
        
        
        
    }
};
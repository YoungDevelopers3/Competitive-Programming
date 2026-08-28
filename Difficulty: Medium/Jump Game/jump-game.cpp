class Solution {
  public:
    bool canReach(vector<int> &arr) {
        // code here
        int max_reach=0;
        for(int i=0;i<arr.size();i++){
            if(i>max_reach){
                return false;
            }
            max_reach=max(max_reach,i+arr[i]);
        }
        return true;
    }
};
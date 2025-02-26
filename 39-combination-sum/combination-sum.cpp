class Solution {
public:
    
    
    void check(int index,vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& combination){
          if(index==candidates.size()){
            if(target==0){
                ans.push_back(combination);
                for(int i:combination){
                cout<<i<<" ";
            }
            cout<<endl;
            }
            
            return ;
          }
          if(candidates[index]<=target){
            combination.push_back(candidates[index]);
            check(index,candidates,target-candidates[index],ans,combination);
            combination.pop_back();
          }
           check(index+1,candidates,target,ans,combination);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>combination;
        check(0,candidates,target,ans,combination);
        return ans;


    }
};
class Solution {
public:
    void generate(int index,int target,vector<int>& candidates,vector<vector<int>>& ans,vector<int>& combination){
        if(index==candidates.size()){
            if(target==0){
            ans.push_back(combination);
            }
             return;                   
        }
        
        if(candidates[index]<=target){
            combination.push_back(candidates[index]);
            generate(index,target-candidates[index],candidates,ans,combination);
            combination.pop_back();
        } 
        generate(index+1,target,candidates,ans,combination);
        


    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>combination;
        int index=0;
        generate(index,target,candidates,ans,combination);
        return ans;

    }
};
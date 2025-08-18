class Solution {
public:
    void generate(int i,int sum,vector<int>& combination,vector<vector<int>>& combinations,vector<int>& candidates,int target){
          if(sum==target){
            combinations.push_back(combination);
            return;
          }
          if(i==candidates.size()){
            return;
          }
          if(sum>target){
            return;
          }

          combination.push_back(candidates[i]);
          sum=sum+candidates[i];
          generate(i+1,sum,combination,combinations,candidates,target);
          combination.pop_back();
          sum=sum-candidates[i];

          while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
            i++;
          }
          generate(i+1,sum,combination,combinations,candidates,target);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>combinations;
        vector<int>combination;
        int sum=0;
        int i=0;
        generate(i,sum,combination,combinations,candidates,target);
        return combinations;

    }
};
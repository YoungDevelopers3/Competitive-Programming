class Solution {
public:
    void generate(int i,int k,int n,int sum,vector<int>& subset,vector<vector<int>>& ans){
          
          if(k==0){
            if(sum==n){
                ans.push_back(subset);
                return;
            }
            return;
          }
          if(i==10){
            return;
          }
          
          
          
          //if including the element 
          subset.push_back(i);
          sum=sum+i;
          generate(i+1,k-1,n,sum,subset,ans);
          subset.pop_back();
          sum=sum-i;

          //if not including the element
          generate(i+1,k,n,sum,subset,ans);

    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>subset;
        int i=1,sum=0;
        generate(i,k,n,sum,subset,ans);
        return ans;
    }
};
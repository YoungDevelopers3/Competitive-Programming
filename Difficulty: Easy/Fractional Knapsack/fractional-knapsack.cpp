class Solution {
  public:
  
   static bool compare(vector<int> &a,vector<int>&b){
        double value_a=(1.0*a[0])/a[1];
        double value_b=(1.0*b[0])/b[1];
        return value_a>value_b;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<vector<int>>items(n,vector<int>(2));
        for(int i=0;i<n;i++){
            items[i][0]=val[i];
            items[i][1]=wt[i];
        }
        
        sort(items.begin(),items.end(),compare);
        
        int current=capacity;
        double ans=0;
        for(int i=0;i<n;i++){
            if(items[i][1]<=current){
                ans=ans+items[i][0];
                current=current-items[i][1];
            }
            else{
                ans=ans+((items[i][0]*1.0)/items[i][1])*current;
                break;
            }
        }
        
        return ans;
        
    }
};

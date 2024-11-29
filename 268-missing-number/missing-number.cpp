class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        int n=nums.size();
    int sum_Arr=0,sum_og=0;
    for(int i=0;i<n;i++){
        sum_Arr=sum_Arr+nums[i];
    }
    for(int j=0;j<=n;j++ ){
          sum_og=sum_og+j;
    }
    return sum_og-sum_Arr;




    }
};
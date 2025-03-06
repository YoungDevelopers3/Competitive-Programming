class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;
        long long int sum=0;
        vector<int>ans;

        while(low<high){
            sum=numbers[low]+numbers[high];
            if(sum==target){
                ans.push_back(low+1);
                ans.push_back(high+1);
            }
            if(sum>target){
                high--;
            }
            else{
                low++;
            }
        }
        return ans;
    }
};
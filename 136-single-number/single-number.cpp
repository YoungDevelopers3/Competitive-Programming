class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        int ans=INT_MIN;
        for(int i:nums){
            if(freq[i]==1){
                ans=i;
            }
        }
        return ans;
    }
};
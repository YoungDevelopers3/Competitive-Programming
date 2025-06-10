class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        int ans=0;
        for(int i:nums){
            freq[i]++;
        }
        for(int i:nums){
            if(freq[i]!=3){
                ans= i;
            }
        }
        return ans;
    }
};
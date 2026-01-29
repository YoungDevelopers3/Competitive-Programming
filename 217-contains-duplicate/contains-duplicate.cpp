class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        bool ans=false;
        for(int i:nums){
            freq[i]++;
            if(freq[i]==2){
              ans=true;
              break;
            }
        }
        return ans;
    }
};
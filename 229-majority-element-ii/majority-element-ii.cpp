class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int>ans1;
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
            if(freq[i]>(n/3)){
                ans1.insert(i);
            }
        }
        vector<int>ans2(ans1.begin(),ans1.end());
        return ans2;



    }
};
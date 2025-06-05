class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int i:nums1){
            freq[i]++;
        }
        for(int i:nums2){
            if(freq[i]>0){
                ans.push_back(i);
                freq[i]--;
            }
        }
        return ans;
    }
};
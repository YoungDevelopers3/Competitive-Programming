class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>freq1;
        for(int n:nums1){
            freq1[n]++;
        }
        set<int>s1;
        for(int n:nums2){
            if(freq1[n]>=1){
                s1.insert(n);
            }
        }
        vector<int>result(s1.begin(),s1.end());

       return result;


    }
};
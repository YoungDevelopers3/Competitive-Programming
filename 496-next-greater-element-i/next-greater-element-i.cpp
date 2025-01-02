class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        stack<int>s;
        unordered_map<int,int>um;
 
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && nums2[i]>=s.top()){
                s.pop();
            }
            um[nums2[i]]=s.empty() ? -1:s.top(); 
            s.push(nums2[i]);
        }   
        for(int num:nums1){
            result.push_back(um[num]);
        }

        return result;


    }
};
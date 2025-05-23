class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=m+n;
        while(n--){
            if(nums1[a-1]==0){
                nums1.pop_back();
            }
            a--;
        }
        for(int i:nums2){
            nums1.push_back(i);
        }
        sort(nums1.begin(),nums1.end());


    }
};
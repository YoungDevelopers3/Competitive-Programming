class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> ms;
    vector<int> res;

    for(int i = 0; i < nums.size(); i++) {
        ms.insert(nums[i]); // add current element
        
        if(i >= k) {
            ms.erase(ms.find(nums[i-k])); // remove element that left window
        }

        if(i >= k-1) {
            res.push_back(*ms.rbegin()); // biggest element in multiset
        }
    }

    return res;
    }
};
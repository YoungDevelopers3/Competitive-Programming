class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        stack<int>s;
        unordered_map<int, int> nextGreater;

    // Traverse nums2 in reverse to find the next greater element for each number
    for (int i = nums2.size() - 1; i >= 0; --i) {
        // Pop elements from the stack that are less than or equal to nums2[i]
        while (!s.empty() && s.top() <= nums2[i]) {
            s.pop();
        }

        // If the stack is empty, no greater element exists
        nextGreater[nums2[i]] = s.empty() ? -1 : s.top();

        // Push the current element onto the stack
        s.push(nums2[i]);
    }

    // Build the result for nums1 using the nextGreater map
    for (int num : nums1) {
        result.push_back(nextGreater[num]);
    }

    return result;
    
    }
};
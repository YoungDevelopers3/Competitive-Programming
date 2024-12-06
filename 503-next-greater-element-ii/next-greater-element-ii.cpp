class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
    vector<int> result(n, -1); // Initialize result array with -1
    stack<int> s; // Stack to store indices

    // Traverse the array twice to simulate circular behavior
    for (int i = 0; i < 2 * n; i++) {
        // Current element in the circular traversal
        int num = nums[i % n];

        // Resolve the next greater element for indices in the stack
        while (!s.empty() && nums[s.top()] < num) {
            result[s.top()] = num; // Update result for the top index
            s.pop();               // Remove the resolved index
        }

        // Push the index if within the first traversal (to avoid duplicates)
        if (i < n) {
            s.push(i);
        }
    }

    return result;
    }
};
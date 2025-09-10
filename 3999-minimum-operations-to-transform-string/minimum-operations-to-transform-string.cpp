class Solution {
public:
    int minOperations(string s) {
       int ans = 0;
    for (char c : s) {
        int d = (26 - (c - 'a')) % 26;  // distance forward to 'a'
        ans = max(ans, d);
    }
    return ans;
    }
};
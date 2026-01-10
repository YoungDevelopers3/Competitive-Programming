class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long windowSum = 0;

        // 1) sum of first window of size k
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        // 2) best sum so far
        long long bestSum = windowSum;

        // 3) slide the window
        for (int i = k; i < (int)nums.size(); i++) {
            windowSum = windowSum - nums[i - k] + nums[i]; // remove left, add right
            bestSum = max(bestSum, windowSum);
        }

        // 4) max average
        return (double)bestSum / k;
    }
};
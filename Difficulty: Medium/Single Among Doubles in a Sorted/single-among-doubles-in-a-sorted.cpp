class Solution {
  public:
    int single(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        // Ensure mid points to the first in a pair
        if (mid % 2 == 1) mid--;
        if (arr[mid] == arr[mid + 1]) {
            low = mid + 2;
        } else {
            high = mid;
        }
    }
    return arr[low];
        
    }
};
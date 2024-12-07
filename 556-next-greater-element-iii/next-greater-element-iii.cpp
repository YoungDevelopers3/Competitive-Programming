class Solution {
public:
    int nextGreaterElement(int n) {
        string digits = to_string(n);
        int len = digits.size();
        
        // Step 1: Find the pivot
        int i = len - 2;
        while (i >= 0 && digits[i] >= digits[i + 1]) {
            i--;
        }
        
        // If no pivot is found, return -1
        if (i < 0) return -1;
        
        // Step 2: Find the smallest digit larger than the pivot
        int j = len - 1;
        while (digits[j] <= digits[i]) {
            j--;
        }
        
        // Step 3: Swap the pivot with the next larger digit
        swap(digits[i], digits[j]);
        
        // Step 4: Reverse the digits after the pivot
        reverse(digits.begin() + i + 1, digits.end());
        
        // Step 5: Convert back to integer and check for 32-bit limit
        long result = stol(digits);
        return (result > INT_MAX) ? -1 : result;
    }
};
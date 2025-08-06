class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
    int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);

    int diff = (sumA - sumB) / 2;

    
    sort(bobSizes.begin(), bobSizes.end());

    for (int a : aliceSizes) {
        int b = a - diff;
        if (binary_search(bobSizes.begin(), bobSizes.end(), b)) {
            return {a, b};
        }
    }

    return {}; 




    }
};
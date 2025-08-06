class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        long long int sum_a=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        long long int sum_b=accumulate(bobSizes.begin(),bobSizes.end(),0);
        int diff=(sum_a-sum_b)/2;
        sort(aliceSizes.begin(),aliceSizes.end());
        for(int b:bobSizes){
            int a=diff+b;
            if(binary_search(aliceSizes.begin(),aliceSizes.end(),a)){
                return {a,b};
            }
        }
        return {};

    }
};
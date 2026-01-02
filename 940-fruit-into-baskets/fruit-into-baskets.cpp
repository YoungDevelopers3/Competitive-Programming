class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>freq;
        int left=0,right=0,n=fruits.size();
        int max_types=INT_MIN;
        while(right<n){
            freq[fruits[right]]++;
            while(freq.size()>2){
                freq[fruits[left]]--;
                if(freq[fruits[left]]==0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            max_types=max(max_types,right-left+1);
            right++;
        }
        return max_types;
    }
};
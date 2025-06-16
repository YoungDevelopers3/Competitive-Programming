class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long long int mod=1e9+7;
        long long int result=0;
        unordered_map<int,int>left_ele,right_ele;
        for(int i:nums){
            right_ele[i]++;
        }
        for(int i:nums){
            right_ele[i]--;
            int target=2*i;
            result+=1LL*right_ele[target]*left_ele[target];
            result=result%mod;
            left_ele[i]++;
        }
        return result;

    }
};
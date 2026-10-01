class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int counter=0;
        vector<int>prefix(n);
        unordered_map<int,int>freq;
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
           prefix[i]=nums[i]+prefix[i-1];
        }

        for(int i=0;i<n;i++){
            if(prefix[i]==k){
                counter++;
            }
            int val=prefix[i]-k;
            if(freq.find(val)!=freq.end()){
                counter+=freq[val];
            }
            freq[prefix[i]]++;
        }
        return counter;
    }
};
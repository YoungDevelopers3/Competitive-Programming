class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<pair<int,int>>vals;
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
               p++;
               vals.push_back({nums[i],i});
            }
        }

        if(p==0){
            return nums;
        }
        k=k%p;
        vector<int>rotated(p);
        for(int i=0;i<p;i++){
           rotated[i]=vals[(k+i)%p].first;
        }

        for(int i=0;i<p;i++){
            nums[vals[i].second]=rotated[i];
        }
        return nums;

    }
};
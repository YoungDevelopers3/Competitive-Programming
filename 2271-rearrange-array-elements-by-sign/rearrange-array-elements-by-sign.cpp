class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        

            vector<int>positive;
        vector<int>negative;
        int n=nums.size();
        int p=0;
        int ng=0;
        for(int i:nums){
            if(i>=0){
                positive.push_back(i);
            }
            else{
                negative.push_back(i);
            }
        }
        
        nums.clear();
        for(int i=0;i<n;i++){
            if(i%2!=0 && ng<negative.size()){
                nums.push_back(negative[ng]);
                ng++;
            }
            else{
                if(p<positive.size()){
                   nums.push_back(positive[p]);
                   p++; 
                }
            }
        }
        
        while(p<positive.size()){
            nums.push_back(positive[p]);
            p++;
        }
        while(ng<negative.size()){
            nums.push_back(negative[ng]);
            ng++;
        }

       return nums;







    }
};
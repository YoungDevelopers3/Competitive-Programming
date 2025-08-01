class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;
        int n=nums.size();
        for(int i:nums){
            if(i==0){
                red++;
            }
            else if(i==1){
                white++;
            }
            else{
                blue++;
            }
        }
        nums.clear();
        for(int i=0;i<red;i++){
             nums.push_back(0);
        }
        for(int i=0;i<white;i++){
            nums.push_back(1);
        }
        for(int i=0;i<blue;i++){
            nums.push_back(2);
        }
    }
};
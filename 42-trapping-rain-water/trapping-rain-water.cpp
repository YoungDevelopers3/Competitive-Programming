class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0,n=height.size(),left=0;
        int right=n-1;
        int left_max=0,right_max=0;
        while(left<right){
            left_max=max(left_max,height[left]);
            right_max=max(right_max,height[right]);
            
            if(left_max<right_max){
                ans=ans+(left_max-height[left]);
                left++;
            }
            else{
                ans=ans+(right_max-height[right]);
                right--;
            }

        }
        return ans;

    }
};
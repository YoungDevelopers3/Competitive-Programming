class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int area=0,ans=0;
        while(left<right){
             area=(right-left)*min(height[right],height[left]);
            ans=max(ans,area);
            if(height[left]<height[right]){
                left++;
            }
            else {
               right--;
            }
           
        }
        return ans;
    }
};
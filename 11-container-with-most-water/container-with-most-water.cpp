class Solution {
public:
    int maxArea(vector<int>& height) {
        int h1=0;
        int h2=height.size()-1;
        int width=0;
        int area=0;
        int maxwater=0;
        while(h1<h2){
            width=h2-h1;
            area=width*(min(height[h1],height[h2]));
            maxwater=max(maxwater,area);
            if(height[h1]>height[h2]){
                h2--;
            }
            else{
                h1++;
            }

        }
        return maxwater;
        
    }
};
// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int counter=1;
        int max_ht=height[0];
        for(int i=1;i<height.size();i++){
            if(height[i]>max_ht){
                max_ht=height[i];
                counter++;
            }
        }
        return counter;
    }
};
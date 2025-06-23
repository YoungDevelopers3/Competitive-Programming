class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int h1=0,h2=arr.size()-1;
        int width=0;
        int area=0;
        int maxwater=0;
        while(h1<h2){
            width=h2-h1;
            area=width*min(arr[h1],arr[h2]);
            maxwater=max(maxwater,area);
            if(arr[h1]<arr[h2]){
                h1++;
            }
            else{
                h2--;
            }
            
        }
        return maxwater;
        
    }
};
class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        if(arr.size()==0 ||arr[0].size()==0){
            return false;
        }
        
        int row=0;
        int col=arr[0].size()-1;
        
        while(row<arr.size() && col>=0){
            int val=arr[row][col];
            if(val==x){
                return true;
            }
            else if(val>x){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
        
        
        
        
    }
};
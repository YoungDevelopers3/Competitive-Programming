class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        if(mat.size()==0||mat[0].size()==0){
            return false;
        }
        int row=mat.size();
        int col=mat[0].size();
        int high=row*col-1;
        int low=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=mat[mid/col][mid%col];
            if(val==x){
                return true;
            }
            else if(val>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
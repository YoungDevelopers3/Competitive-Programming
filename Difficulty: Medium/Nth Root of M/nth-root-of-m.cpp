class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low=0;
        int high=m;
        while(low<=high){
            int mid=low+(high-low)/2;
            int temp=pow(mid,n);
            if(temp==m){
                return mid;
            }
            else if(temp>m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};
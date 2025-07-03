// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int hi=0;
        int low=0;
        int high=citations.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(citations[mid]>=mid+1){
                low=mid+1;
                hi=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return hi;
    }
};
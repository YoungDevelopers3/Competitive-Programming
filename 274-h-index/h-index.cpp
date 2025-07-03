class Solution {
public:
    int hIndex(vector<int>& citations) {
        int hi=0;
        int low=0;
        int high=citations.size()-1;
        sort(citations.begin(),citations.end());
        reverse(citations.begin(),citations.end());
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
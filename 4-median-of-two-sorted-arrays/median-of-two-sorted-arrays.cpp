class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr3;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
             if(nums1[i]<nums2[j]){
                arr3.push_back(nums1[i++]);
             }
             else{
                arr3.push_back(nums2[j++]);
             }
        }
       while(i<nums1.size()){
           arr3.push_back(nums1[i++]);
       }
       while(j<nums2.size()){
           arr3.push_back(nums2[j++]);
       }
       int n=arr3.size();
       if(arr3.size()%2!=0){
          return double(arr3[n/2]);
       }
       return double((double)arr3[n/2]+(double)arr3[(n/2)-1])/2.0;



    }
};
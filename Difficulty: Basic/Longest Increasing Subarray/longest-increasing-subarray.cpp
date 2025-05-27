class Solution {
  public:
    // Function to find the length of longest increasing subarray
    int lenOfLongIncSubArr(vector<int> &arr) {
        int max_length=INT_MIN;
        int current_length=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                current_length++;
                max_length=max(max_length,current_length);
            }
            else{
                current_length=0;
            }
        }
        return max_length+1;
    }
};
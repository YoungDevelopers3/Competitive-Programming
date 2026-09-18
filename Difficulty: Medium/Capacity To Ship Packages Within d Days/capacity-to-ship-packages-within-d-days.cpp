class Solution {
  public:
  
    int findDays(vector<int> &weights,int capacity){
        int load=0;
        int days=1;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load>capacity){
                days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
  
  
    int leastWeightCapacity(vector<int>& arr, int d) {
        // code here
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int number_of_days=findDays(arr,mid);
            if(number_of_days<=d){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
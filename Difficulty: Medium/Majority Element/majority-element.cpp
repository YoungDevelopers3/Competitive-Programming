// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
       int n=arr.size()/2;
       unordered_map<int,int>freq;
       for(int i:arr){
           freq[i]++;
           if(freq[i]>n){
               return i;
           }
       }
       return -1;
        
    }
};
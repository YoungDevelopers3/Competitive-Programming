
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        unordered_map<int,int>freq;
        int counter=0;
        for(int i:arr){
            freq[i]++;
        }
        
        for(int i:arr){
            int j=target-i;
            if(freq[j]>0){
                counter+=freq[j];
                if(j==i){
                    counter--;
                }
            }
            
        }
        
        return counter/2;
        
        
        
        
        
        
    }
};
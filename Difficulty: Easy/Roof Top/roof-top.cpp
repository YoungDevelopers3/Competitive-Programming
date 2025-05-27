
class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
       int steps=0;
       
        vector<int>ht;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                steps++;
                
            }
            else{
                ht.push_back(steps);
                steps=0;
                
            }
        }
        ht.push_back(steps);
        sort(ht.begin(),ht.end());
        reverse(ht.begin(),ht.end());
        return ht[0];
        
        
    }
};
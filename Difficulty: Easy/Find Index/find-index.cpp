class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        vector<int>ans={-1,-1};
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key){
                ans[0]=i;
                break;
            }
            
        }
        
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]==key){
                ans[1]=i;
                break;
            }
           
        }
        
        return ans;
        
        
        
    }
};
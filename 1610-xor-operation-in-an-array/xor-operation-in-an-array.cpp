class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector <int> nums(n);
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
           
       int ans=0;
        if(n==1){
            return start;
        }
        if (n>=2){
           ans = nums[0] ^ nums[1];
        }
        for(int i=2;i<n;i++){
            ans = ans ^nums[i];
        }
        return ans;



    }
};
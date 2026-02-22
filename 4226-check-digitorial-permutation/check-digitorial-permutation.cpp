class Solution {
public:
    int helper(int d){
        int p=1;
        for(int i=1;i<=d;i++){
            p=p*i;
        }
        return p;
    }
    bool isDigitorialPermutation(int n) {
        int num=n;
        int num3=n;
        long long sum=0;
        unordered_map<int,int>freq_num;
        unordered_map<int,int>freq_sum;
         bool ans=true;
        while(num>0){
            int d=num%10;
            freq_num[d]++;
            sum=sum+helper(d);
            num=num/10;
        }
        if(sum==n){
            return ans;
        }
        int num2=sum;
        while(num2>0){
            int D=num2%10;
            freq_sum[D]++;
            num2=num2/10;
        }
        if(freq_sum.size()!=freq_num.size()){
            return false;
        }
        
        while(num3>0){
            int x=num3%10;
            if(freq_sum[x]!=freq_num[x]){
                ans=false;
                break;
            }
            num3=num3/10;
        }
        return ans;
        
        
    }
};
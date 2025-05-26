class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
           reverse(num.begin(),num.end());
        int i=0;
        
        while(k>0){
            int d=k%10;
            k=k/10;
            if(i<num.size()){
                num[i]+=d;
            }
            else{
                num.push_back(d);
            }
            int carry=0;
            carry=num[i]/10;
            num[i]=num[i]%10;
            k+=carry;
            i++;

        }
        reverse(num.begin(),num.end());
        return num;






    }
};
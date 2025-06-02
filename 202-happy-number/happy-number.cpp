class Solution {
public:
    int isSquare(int n){
        int num=n;
        int s=0;
        while(num>0){
            int d=num%10;
            s=s+(d*d);
            num=num/10;
        }
        return s;
    }

    bool isHappy(int n) {
        vector<int>freq;
        freq.push_back(n);
        n=isSquare(n);
        while(true){
            if(n==1){
            return true;
            }
        
        else{
            auto it=find(freq.begin(),freq.end(),n);
            if(it!=freq.end()){
                return false;
            }
            else{
                freq.push_back(n);
                n=isSquare(n);
            }

        } 

    }

}
        
};
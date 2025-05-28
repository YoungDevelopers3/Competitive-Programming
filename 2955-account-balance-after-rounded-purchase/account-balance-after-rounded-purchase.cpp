class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        string p=to_string(purchaseAmount);
        int n=p.size();
        if(n==1){
            if(purchaseAmount==0){
                return 100;
            }
            else if(purchaseAmount>=1 && purchaseAmount<=4){
                return 100;
            }
            else{
                return 90;
            }
        }
        else{
            int d=purchaseAmount%10;
            if(d>=1 && d<=4){
                purchaseAmount=purchaseAmount-d;
            }
            if(d>=5 && d<=9){
                purchaseAmount=purchaseAmount+(10-d);
                
            }
        }
        return 100-purchaseAmount;
        




    }
};
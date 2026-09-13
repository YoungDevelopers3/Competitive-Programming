class Solution {
public:
    int minBitFlips(int start, int goal) {
        long long new_num=0;
        new_num=start^goal;
        int count=0;
        while(new_num!=0){
            new_num=new_num & (new_num-1);
            count++;
        }
        return count;
    }
};
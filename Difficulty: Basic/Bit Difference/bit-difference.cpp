class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        long long new_num=0;
        new_num=a^b;
        int count=0;
        while(new_num!=0){
            new_num= new_num & (new_num-1);
            count++;
        }
        return count;
    }
};
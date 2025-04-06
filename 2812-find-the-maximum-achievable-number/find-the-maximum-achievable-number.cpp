class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x=0;
        while(t--){
            num++;
            x++;
        }
        return num+x;
    }
};
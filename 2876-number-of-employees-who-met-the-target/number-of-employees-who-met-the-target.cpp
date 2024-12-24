class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int num=0;
        for(int i:hours){
            if(i>=target){
                num++;
            }
        }
        return num;
    }
};
class Solution {
public:
    static bool compare(vector<int> &a,vector<int> &b){
        
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int ans=0;
        int current=truckSize;
     for(auto box:boxTypes){
            if(box[0]<= current){
                current=current-box[0];
                ans=ans+(box[0]*box[1]);
            }
            else{
                ans=ans+(current*box[1]);
                break;
            }
        }
        return ans;
    }


};
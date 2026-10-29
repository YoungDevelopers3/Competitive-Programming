class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet=1;
        int n=position.size();
        vector<pair<int,double>>times(n,{0,0.0});
        for(int i=0;i<n;i++){
            double time=0;
            time=(double)(target-position[i])/speed[i];
            times[i]={position[i],time};
        }
        sort(times.begin(),times.end());
        reverse(times.begin(),times.end());
        int i=1;
        double current=times[0].second;
        while(i<n){
            if(current>=times[i].second){
                i++;
            }
            else{
                current=times[i].second;
                fleet++;
                i++;
            }
        }
        return fleet;
    }
};
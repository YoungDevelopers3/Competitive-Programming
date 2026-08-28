class Solution {
  public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        // code here
        vector<array<int,3>>schedules;
        int n=s.size();
        for(int i=0;i<n;i++){
            schedules.push_back({f[i],i+1,s[i]});
        }
        
        sort(schedules.begin(),schedules.end());
        vector<bool>isSelected(n+1,false);
        isSelected[schedules[0][1]]=true;
        int last_meeting=schedules[0][0];
        for(int i=1;i<n;i++){
            if(schedules[i][2]>last_meeting){
                isSelected[schedules[i][1]]=true;
                last_meeting=schedules[i][0];
            }
        }
        
        vector<int>selected;
        for(int i=1;i<=n;i++){
            if(isSelected[i]){
                selected.push_back(i);
            }
        }
        sort(selected.begin(),selected.end());
        return selected;
        
    }
};
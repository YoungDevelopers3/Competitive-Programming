class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<long long,int>>pq;

        for(int i=0;i<points.size();i++){
            long long x=points[i][0],y=points[i][1];
            long long dist2=x*x+y*y;

            pq.push({dist2,i});
            if(pq.size()>k){
                pq.pop();
            }

        }
        vector<vector<int>>ans;
        while(!pq.empty()){
            int a=pq.top().second;
            ans.push_back(points[a]);
            pq.pop();
        }
        return ans;
    }
};
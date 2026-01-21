class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
vector<pair<int,int>>cx;
for(int i=0;i<n;i++){
    cx.push_back({customers[i],grumpy[i]});
}
int already_satisfied=0;
for(auto p:cx){
    if(p.second==0){
        already_satisfied=already_satisfied+p.first;
    }
}
 
 int max_unsatisfied=0,sum=0;
int right=0,left=0;
while(right<n){
    if(cx[right].second==1){
        sum=sum+cx[right].first;
    }
    if(right-left+1<minutes){
        right++;
    }
    else if(right-left+1==minutes){
        max_unsatisfied=max(max_unsatisfied,sum);
        if(cx[left].second==1){
            sum=sum-cx[left].first;
        }
        
        right++;
        left++;
    }
    else{
        left++;
    }
}
return (max_unsatisfied+already_satisfied);

    }
};
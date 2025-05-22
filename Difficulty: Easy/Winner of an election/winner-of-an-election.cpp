class Solution {
  public:

    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n) {
        vector<string>ans;
        map<string,int>freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int votes=INT_MIN;
        string candidate="";
        for(int i=0;i<n;i++){
            votes=max(votes,freq[arr[i]]);
        }
        for(auto p:freq){
            if(p.second==votes){
                candidate=p.first;
                break;
            }
        }
        string votes1=to_string(votes);
        ans.push_back(candidate);
        ans.push_back(votes1);
        return ans;
        
        
        
        
        
    }
};
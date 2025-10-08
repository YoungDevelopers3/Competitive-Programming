class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        for(string str:operations){
            if(str!="C" && str!="D" && str!="+"){
                int ele=stoi(str);
                v.push_back(ele);
            }
            else if(str=="C"){
                v.pop_back();
            }
            else if(str=="D"){
                int n=v.size()-1;
                v.push_back((2*v[n]));
            }
            else{
                int sum=0;
                 int n=v.size()-1;
                 sum=v[n]+v[n-1];
                v.push_back(sum);
            }
        }
        int s=0;
        for(int i:v){
           s=s+i;
        }
        return s;
    }
};
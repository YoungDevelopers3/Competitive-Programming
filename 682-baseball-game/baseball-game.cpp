class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>record;

         for(string command:operations){
        if(command=="C"){
            record.pop_back();
        }
        else if(command=="D"){
            record.push_back(2*record.back());
        }
        else if(command=="+"){
            record.push_back(record[record.size()-1]+record[record.size()-2]);
        }
        else {
            record.push_back(stoi(command));
        }
    }
    int totalSum=0;
    for(int score:record){
        totalSum=totalSum+score;
    }
    return totalSum;
    }
};
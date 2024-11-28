vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	
	unordered_map<int ,int>csum;
     int sum=0;
    for(int num:arr){
        sum=sum+num;
        if(sum>0){
        csum[num]=sum;
        }
        

    }
   vector<pair<int,int>> v2(csum.begin(),csum.end());
   sort(v2.begin(),v2.end());
vector<int> v3 ;
    for(auto it:v2){
        v3.push_back(it.second);
    }
	return v3;
     cout<<endl;
	
	
	
	
}
//https://github.com/YoungDevelopers3/Competitive-Programming/new/main   O(n)

class Solution {
public:
    
   int check(vector<int>& persons,int k,int index){
     int n=persons.size();
    if(n==1){
        return persons[0];
    }
   
    index=(index+k)%n;
   
    persons.erase(persons.begin()+index);
    
    return check(persons,k,index);
    
} 
    
    int findTheWinner(int n, int k) {
              int index=0;
              vector<int>persons;
              for(int i=1;i<=n;i++){
                persons.push_back(i);
              }
              k=k-1;
              return check(persons,k,index);

    }
};
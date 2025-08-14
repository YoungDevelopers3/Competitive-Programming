class Solution {
  public:
    int moves_and_groves=0;
    int towerOfHanoi(int n, int from, int to, int aux) {
       if(n==1){
           moves_and_groves++;
           return moves_and_groves;
       }
       towerOfHanoi(n-1,from,aux,to);
       moves_and_groves++;
       
       towerOfHanoi(n-1,aux,to,from);
       
       return moves_and_groves;
       
    }
};
class Solution {
  public:
  
  int knapSackRecur(int i, int capacity, vector<int> &val, 
                  vector<int> &wt, vector<vector<int>> &memo) {
    if (i == val.size())
        return 0;

    // If value is memoized.
    if (memo[i][capacity] != -1)
        return memo[i][capacity];

    // Consider current item only if
    // its weight is less than equal
    // to maximum weight.
    int take = 0;
    if (wt[i] <= capacity) {
        take = val[i] + knapSackRecur(i, capacity - wt[i],
                                      val, wt, memo);
    }
                  

    // Skip the current item
    int noTake = knapSackRecur(i + 1, capacity, val, wt, memo);

    // store maximum of the two and return it.
    return memo[i][capacity] = max(take, noTake);
                  }

  
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        
          vector<vector<int>> memo(val.size(), vector<int>(capacity + 1, -1));

    return knapSackRecur(0, capacity, val, wt, memo);
        
        
    }
};
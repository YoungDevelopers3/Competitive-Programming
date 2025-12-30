class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
       multiset<int> ms;
    vector<int> res;

    for(int i = 0; i < arr.size(); i++) {
        ms.insert(arr[i]); // add current element
        
        if(i >= k) {
            ms.erase(ms.find(arr[i-k])); // remove element that left window
        }

        if(i >= k-1) {
            res.push_back(*ms.rbegin()); // biggest element in multiset
        }
    }

    return res;
        
    }
};
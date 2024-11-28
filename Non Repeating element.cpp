int findNonRepeatingElement(vector<int> &arr) {
    
	
	unordered_map<int,int>frequency;
        
        for(int i:arr){
            frequency[i]++;
        }

        for(auto it:frequency){
            if(it.second==1){
                return it.first;
            }
        }

	
	
	
	
}

//Non repeating element    https://workat.tech/problem-solving/practice/non-repeating-element O(N)

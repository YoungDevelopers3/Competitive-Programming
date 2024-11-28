vector<int> primesUptoN(int n) {
	vector<int>v;
    for(int i=1;i<=n;i++){
		int counter =0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				counter++;
			}
		}
		if(counter==2){
			v.push_back(i);
		}
	}
	return v;
	
}

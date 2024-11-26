vector<int> getEvenDigitNumbers(vector<long long int> &arr) {
    int t;
	cin>>t;
	while(t--){
		int n=0;
		cin>>n;
        
		for(int i=0;i<n;i++){
           long long int num=0;
			cin>>num;
            arr.push_back(num);
		}
		for(int i:arr){
			int d=0,counter=0;
			long long int num=0;
             num=i;
			while(num>0){
				d=num%10;
				counter++;
				num=num/10;
			}
			if(counter %2==0){
                cout<<i<<" ";
            }
			
		}
		cout<<endl;
	}
}

vector<int> getSquareSortedArray(vector<int> &arr) {
   
	int n=arr.size();
	for(int j=0;j<n;j++){
    arr[j]=arr[j]*arr[j];
}
sort(arr.begin(),arr.end());
return arr;
cout<<endl;
	
}
//https://workat.tech/problem-solving/practice/square-sorted-array    time complexity O(nlogn)

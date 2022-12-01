vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	// add your logic here
	vector<int> cs;
	int s=0;
	for(int i=0;i<arr.size();i++)
	{	
		s=0;
		for(int e=i;e>=0;e--) s+=arr[e];
		if(s>0) cs.push_back(s);
	}
	return cs;
}
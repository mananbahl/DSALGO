vector<int> getCumulativeSum(vector<int> &arr) {
	// add your logic here
	vector<int> T;
	int s=0;
	for(int i=0;i<arr.size();i++)
	{
		for(int e=i;e>=0;e--)
		{
			s+=arr[e];
		}
		T.push_back(s);
		s=0;
	}
	return T;
}
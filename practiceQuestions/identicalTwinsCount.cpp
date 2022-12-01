int getIdenticalTwinsCount(vector<int> &arr) {
    // add your logic here
	int count=0;
	for(int i=0;i<arr.size();i++)
	{	
		for(int j=0;j<arr.size();j++)
		{
			if(arr[i]==arr[j] && i<j) count++;
		}
	}
	return count;
}
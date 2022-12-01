class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        //best time complexity
    long maxsum=arr[0];
    long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];		 // adding consecutively
        if(sum>=maxsum) maxsum=sum;
        if(sum<0) sum=0;	// if sum is negative it will decrease the overall sum
    }
        return maxsum;
    }
};
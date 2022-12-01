// arr: input array
// n: size of array
//Function to find the sum of contiguous subarray with maximum sum.

//worst time complexity
class Solution
{
    public:
    
    long long maxSubarraySum(int arr[], int n)
   {
       
    long maxsum=arr[0];
    long sum;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(maxsum<sum) maxsum=sum;
        }
    }
        return maxsum;
    }
};

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jumps=0;
        int steps=0;
        int maxRange;
        for(int i=0;i<n;jumps++)
        {
            maxRange=arr[i]+i;
            for(int k=i;k<=maxRange;k++)
            {
             if(steps<arr[k])
             {
                steps=arr[k];
                i=k;
             }
            }
            if(steps==0 || i<0) return -1;        
        }
        return jumps;        
    }
    
};
// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
         cout<<"Enter req: ";	
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
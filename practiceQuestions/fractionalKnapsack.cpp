// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

static bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    return (double)p1.first/(double)p1.second>(double)p2.first/(double)p2.second;    
}
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double profit=0.00;
        vector<pair<int,int>> pw;
        for(int i=0;i<n;i++) pw.push_back(pair<int,int>(arr[i].value,arr[i].weight));            

        sort(pw.begin(),pw.end(),cmp);

        for(int i=0;i<n;i++)
        {
            if(W>pw[i].second)
            {
                profit+=pw[i].first;            
                W-=pw[i].second;
            }
            else
            {
                profit+= ((double)W/(double)pw[i].second)*(double)pw[i].first;
                break;
            }
            
            
        }
    
        return profit;        
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
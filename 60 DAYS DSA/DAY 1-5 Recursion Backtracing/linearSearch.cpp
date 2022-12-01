#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size,int n)
{
if(arr[0]==n) return true;
if(size==0) return false;
return linearSearch(arr+1,size-1,n);
}
int main()
{
int arr[5];
for(int i=0;i<5;i++) cin>>arr[i];
cout<<"To find : ";
int n;
cin>>n;
cout<<linearSearch(arr,5,n)<<endl;
}
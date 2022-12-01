#include<iostream>
using namespace std;
int sum(int arr[], int size)
{
if(size==1) return arr[0];
return arr[0]+sum(arr+1,size-1);
}
int main()
{
int arr[5];
for(int i=0;i<5;i++) cin>>arr[i];
cout<<sum(arr,5);
}
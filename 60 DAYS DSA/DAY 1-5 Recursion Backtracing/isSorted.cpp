#include<iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
if(size==0 || size==1) return true;
if(arr[0]>arr[1]) return false;
else return isSorted(arr+1,size-1);
}
int main()
{
int arr[10];
for(int i=0;i<10;i++) cin>>arr[i];
cout<<isSorted(arr,10);
}
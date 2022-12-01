#include<iostream>
using namespace std;
bool linearSearch(int arr[], int s, int e,int key)
{
int mid=(s+e)/2;
if(s>e) return false;
if(arr[mid]==key) return true;
if(arr[mid]>key) return linearSearch(arr, s, mid-1, key);
else return linearSearch(arr, mid+1, e, key);

}
int main()
{
int arr[5];
for(int i=0;i<5;i++) cin>>arr[i];
int key;
cout<<"To find : ";
cin>>key;
cout<<linearSearch(arr,0,4,key);
}
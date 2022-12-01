#include<iostream>
using namespace std;
void sayDigit(int n)
{
if(n==0) return;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
sayDigit(n/10);
cout<<arr[n%10]<<" ";
}
int main()
{
int n;
cin>>n;
sayDigit(n);
}
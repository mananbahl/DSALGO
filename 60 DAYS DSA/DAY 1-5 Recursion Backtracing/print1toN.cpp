#include<iostream>
using namespace std;
void printO(int n)
{
if(n==1) 
{
cout<<1<<" ";
return;
}
printO(n-1);
cout<<n<<" ";
}
int main()
{
int n;
cin>>n;
printO(n);
}
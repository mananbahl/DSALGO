//more optimized than power.cpp
#include<iostream>
using namespace std;
long exponent(long p, long b)
{
if(p==0) return 1;
if(p%2==0) return exponent(p/2,b)*exponent(p/2,b);
else return b*exponent(p/2,b)*exponent(p/2,b);
}
int main()
{
long p,b;
cout<<"Base : ";
cin>>b;
cout<<"Power : ";
cin>>p;
cout<<exponent(p,b);
}
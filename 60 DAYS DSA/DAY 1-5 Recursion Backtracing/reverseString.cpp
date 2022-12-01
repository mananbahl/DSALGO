#include<iostream>
using namespace std;
string reverse(string s, int i, int j)
{
if(i>j) return s;
swap(s[i],s[j]);
return reverse(s, i+1, j-1);
}
int main()
{
string s;
cin>>s;
cout<<reverse(s,0,s.length()-1)<<endl;
}








/*
int main()
{
string s;
cin>>s;
string r="";
for(int i=s.length()-1;i>=0;i--)
{
r+=s[i];
}
cout<<r<<endl;
}
*/
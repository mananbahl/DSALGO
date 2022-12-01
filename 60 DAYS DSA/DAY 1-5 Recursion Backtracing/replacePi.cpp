#include<iostream>
using namespace std;
void replacePi(string s, int i, int j)
{
if(i==s.length() || j==s.length()) return;
if(s[i]=='p' && s[j]=='i')
{
cout<<3.14;
}
else
{
cout<<s[i]<<s[j];
}
replacePi(s,i+2,j+2);
}
int main()
{
string s;
cin>>s;
replacePi(s,0,1);
}
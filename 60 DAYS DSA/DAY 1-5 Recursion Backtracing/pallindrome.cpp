#include<iostream>
using namespace std;
bool pallindrome(string s, int i, int j)
{
if(i==j) return true;
if(s[i]==s[j]) return pallindrome(s, i+1, j-1);
else return false;
}
int main()
{
string s;
cin>>s;
cout<<"Is a pallindrome : "<<pallindrome(s,0,s.length()-1)<<endl;
}




//NORMAL METHOD WITHOUT RECURSION
/*
int main()
{
string s;
cin>>s;
int i=0;
int j=s.length()-1;
while(i<j)
{
if(s[i]!=s[j])
{
cout<<"Not a pallindrome";
return 0;
}
i++;
j--;
}
cout<<"Is a pallindrome";
}
*/
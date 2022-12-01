import java.util.*;
class psp
{
public static void main(String gg[])
{
String s=gg[0];
int c=substringPallindrome(s);
System.out.println(c);
}
public static int substringPallindrome(String s)
{
String str="";
int c=0;
for(int i=0;i<=s.length()-1;i++) 
{
for(int j=i+1;j<=s.length();j++)
{
str=s.substring(i,j);
if(isPallindrome(str)) c++; 
}
}
return c;
}
public static boolean isPallindrome(String s) 
{
String rev="";
//System.out.println(s.length());
for(int i=s.length()-1;i>=0;i--) rev+=s.charAt(i);
if(s.equalsIgnoreCase(rev))
{
return true;
}
return false;
}
}
import java.util.*;
class bubbleGeneric
{
public static void sort(Object []ptr,int cs,int es,Comparator c)
{
int m,e,f;
m=cs-2;
Object g=null;
e=0;
f=0;
int w=0;
while(m>=0)
{
e=0;
f=1;
while(e<m)
{
w=c.compare(ptr[e],ptr[f]);
System.out.println(w);
if(w<0)
{
g=ptr[e];
ptr[e]=ptr[f];
ptr[f]=g;
} 
e++;
f++;
}
m--;
}
}
}
class psp
{
public static void main(String gg[])
{
Scanner sc=new Scanner(System.in);
System.out.print("Enter requirement : ");
int req=sc.nextInt();
int arr[]=new int[req];

Integer x[]=new Integer[arr.length];
for(int i=0;i<arr.length;i++) 
{
arr[i]=sc.nextInt();
x[i]=arr[i];
}
bubbleGeneric.sort((Object [])x,req,Integer.BYTES,new Comparator<>(){
public int compare(Object left,Object right)
{
Integer a=(Integer)left;
Integer b=(Integer)right;
return a-b;
}
});
System.out.println("************");
for(int i=0;i<x.length;i++) System.out.println(x[i]);
}
}
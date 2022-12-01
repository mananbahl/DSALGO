import java.util.*;
class bubbleSort
{
public static void sort(int arr[],int size)
{
int m,e,f;
m=size-2;
e=0;
f=0;
int g=0;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(arr[f]<arr[e])
{
g=arr[e];
arr[e]=arr[f];
arr[f]=g;
}
f++;
e++;
}
m--;
}
}
}
class psp
{
public static void main(String gg[])
{
System.out.print("Enter a requirement : ");
Scanner sc=new Scanner(System.in);
int req=sc.nextInt();
int arr[]=new int[req];
for(int i=0;i<arr.length;i++) arr[i]=sc.nextInt();
bubbleSort.sort(arr,req);
System.out.println("**********************");
for(int i=0;i<arr.length;i++) System.out.println(arr[i]);
}
}

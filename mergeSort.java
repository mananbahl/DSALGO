import java.util.*;
class Merge
{
public void merge(int arr[], int l, int mid,int r)
{
int n1=mid-l+1;
int n2=r-mid;
int a[]=new int[n1];
int b[]=new int[n2];

for(int i=0;i<n1;i++)
{
a[i]=arr[l+i];
}
for(int i=0;i<n2;i++)
{
b[i]=arr[mid+1+i];
}
int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
arr[k]=a[i];
k++;
i++;
}
else
{
arr[k]=b[j];
k++;
j++;
}
}
while(i<n1)
{
arr[k]=a[i];
k++;
i++;
}
while(j<n2)
{
arr[k]=b[j];
k++;
j++;
}
}
public void mergeSort(int arr[],int l,int r)
{
if(l<r)
{
int mid=(l+r)/2;
mergeSort(arr,l,mid);
mergeSort(arr,mid+1,r);
merge(arr,l,mid,r);
}

}
}
class psp
{
public static void main(String gg[])
{
Merge m=new Merge();
int arr[]=new int[5];
Scanner s=new Scanner(System.in);
arr[0]=s.nextInt();
arr[1]=s.nextInt();
arr[2]=s.nextInt();
arr[3]=s.nextInt();
arr[4]=s.nextInt();
m.mergeSort(arr,0,4);
Systtm.out.println("AFTER MERGE SORT");
System.out.println(arr[0]);
System.out.println(arr[1]);
System.out.println(arr[2]);
System.out.println(arr[3]);
System.out.println(arr[4]);
}
}
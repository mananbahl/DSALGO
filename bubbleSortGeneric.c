//Example 5
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Following code is being written by Suresh
void bubbleSort(void *ptr,int size,int elementSize,int(*p2f)(void *,void *))   //parameter for a functions address
{
int m,e,f;
int w;
void *a,*b,*c;
c=(void *)malloc(elementSize);
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
a=ptr+(f*elementSize);
b=ptr+(e*elementSize);
w=p2f(a,b);
if(w<0)
{
memcpy(c,(const void *)a,elementSize);
memcpy(a,(const void *)b,elementSize);
memcpy(b,(const void *)c,elementSize);
}
/*
if(ptr[f]<ptr[e])   this is bullShit ,you are comparing addresses at ptr[e] and ptr[f]
{	           Even ptr is of void type so it cannot be used as that same array declared in main
	
}
*/
e++;
f++;
}
m--;
}
}
//Following code is being created by Mahesh
int myComparator(void *left,void *right)
{
int *a,*b;
a=(int *)left;
b=(int *)right;
return (*a)-(*b);   //only if a is less than b , then it will return a -ve value
}
int main()
{
int *x,req,y;
printf("Enter requirement : ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid input");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Cannot allocate memory, some problem");
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a number : ");
scanf("%d",x+y);     //address calculation : x is a base address in which y*sizeof(int) will be added
}		// different from normal arithmetic
bubbleSort(x,req,sizeof(int),myComparator);
for(y=0;y<req;y++)
{
printf("%d\n",*(x+y));
}
}
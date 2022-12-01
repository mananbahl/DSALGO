//Example 6
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
struct Student
{
int rollNumber;
char name[21];
};
int myComparator(void *left,void *right)
{
struct Student *a,*b;
a=(struct Student *)left;
b=(struct Student *)right;
return a->rollNumber-b->rollNumber;   //only if a is less than b , then it will return a -ve value
}
int main()
{
struct Student *x;
int req,y;
printf("Enter requirement : ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid input");
return 0;
}
x=(struct Student *)malloc(sizeof(struct Student)*req);
if(x==NULL)
{
printf("Cannot allocate memory, some problem");
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a roll number : ");
scanf("%d",&((x+y)->rollNumber));
printf("Enter a name : ");
scanf("%s",&((x+y)->name));
}
bubbleSort(x,req,sizeof(struct Student),myComparator);
for(y=0;y<req;y++)
{
printf("Roll Number : %d , Name : %s\n",x[y].rollNumber,x[y].name);
}
}
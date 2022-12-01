//4 example
#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *x,int size)
{
int m,g,e,f;
m=size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(*(x+f)<*(x+e))
{
g=*(x+e);
*(x+e)=*(x+f);
*(x+f)=g;
}
e++;
f++;
}
m--;
}
}
int main()
{
int *x,y,m,g,f,e,req;
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
scanf("%d",x+y);	// or x+y ----  base address(which is x) will be increased by 4*y
}
bubbleSort(x,req);
for(y=0;y<req;y++)
{
printf("%d\n",*(x+y));
}
}
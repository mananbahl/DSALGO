#include<stdio.h>
#include<stdlib.h>
void linearSort(int *r,int size)
{
int e,f,g,m;
e=0;
m=size-2;
while(e<=m)
{
f=e+1;
while(f<=(m+1))
{
if(r[f]<r[e])
{
g=r[e];
r[e]=r[f];
r[f]=g;
}
f++;
}
e++;
}
}
int main()
{
int *x,req,y;
printf("Enter requirement : ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid input\n");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Cannot allocate memory , some problem.\n");
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a number : ");
scanf("%d",x+y);
}
linearSort(x,req);
for(y=0;y<req;y++) printf("%d\n",x[y]);
return 0;
}
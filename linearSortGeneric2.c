#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void linearSort(void *ptr,int cs,int es,int (*p2f)(void *,void *))
{
int e,f,w,iep,oep;
void *a,*b,*c;
c=(void *)malloc(es);
oep=cs-2;
iep=cs-1;
for(e=0;e<=oep;e++)
{
for(f=e+1;f<=iep;f++)
{
a=ptr+(es*f);
b=ptr+(es*e);
w=p2f(a,b);
if(w<0)
{
memcpy(c,(const void *)a,es);
memcpy(a,(const void *)b,es);
memcpy(b,(const void *)c,es);
}
}
}
free(c);
}
int myComparator(void *left,void *right)
{
int *p2num1=(int *)left;
int *p2num2=(int *)right;
return (*p2num1)-(*p2num2);
}
int main()
{
int *x,req,y;
printf("Enter requirement : ");
scanf("%d",&req);
if(x<=0)
{
printf("Invalid input : "+req);
}
x=(int *)malloc(sizeof(int)*req);
for(y=0;y<req;y++)
{
printf("Enter a number : ");
scanf("%d",x+y);
}
linearSort(x,req,sizeof(int),myComparator);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
}
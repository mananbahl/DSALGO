#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void linearSort(void *ptr,int cs,int es,int (*p2f)(void *,void *))
{
int oep,iep;
oep=cs-2;
iep=cs-1;
void *a,*b,*c;
int w;
c=(void *)malloc(es);
for(int e=0;e<=oep;e++)
{
for(int f=e+1;f<=iep;f++)
{
a=ptr+(f*es);
b=ptr+(e*es);
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
int *a=(int *)left;
int *b=(int *)right;
return (*a)-(*b);
}
int main()
{
int *x,req;
printf("Enter requirement : ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirement");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Cannot allocate memory");
return 0;
}
for(int i=0;i<req;i++)
{
printf("Enter a number : ");
scanf("%d",x+i);
}
linearSort(x,req,sizeof(int),myComparator);
for(int i=0;i<req;i++) printf("%d\n",*(x+i));
}
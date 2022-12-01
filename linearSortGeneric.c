#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void linearSort(void *r,int size,int es,int(*p2f)(void *,void *))
{
int e,f,g,m,w;
void *a,*b,*c;
c=(void *)malloc(es);
e=0;
m=size-2;
while(e<=m)
{
f=e+1;
while(f<=(m+1))
{
a=r+(f*es);
b=r+(e*es);
w=p2f(a,b);
if(w<0)
{
memcpy(c,(const void *)a,es);
memcpy(a,(const void *)b,es);
memcpy(b,(const void *)c,es);
}
f++;
}
e++;
}
}
int myComparator(void *a,void *b)
{
int *left=(int *)a;
int *right=(int *)b;
return *left-*right;
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
linearSort(x,req,sizeof(int),myComparator);
for(y=0;y<req;y++) printf("%d\n",*(x+y));
return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void linearSort(void *ptr,int ub,int lb,int es, int (*p2f)(void *,void *))
{
int e,f,w,cs;
void *a,*b,*c;
c=(void *)malloc(sizeof(int));
cs=ub-lb+1;   //collection size
int oep=ub-1;
int iep=ub;
for(e=lb;e<=oep;e++)
{
for(f=e+1;f<=iep;f++)
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
int *x,y,req,ub,lb;
printf("Enter requirement : ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid input  : %d\n",req);
return 0;
}
x=(int *)malloc(sizeof(int)*req);
for(y=0;y<req;y++)
{
printf("Enter number : ");
scanf("%d",x+y);
}
printf("Enter upper bound : ");
scanf("%d",&ub);
printf("Enter lower bound : ");
scanf("%d",&lb);
if(ub<0 || ub>=req) 
{
printf("Invalid input\n");
return 0;
}
if(lb<0 || lb>=req) 
{
printf("Invalid input\n");
return 0;
}
if(ub<lb || ub==lb)
{
printf("Invalid input\n");
return 0;
}
linearSort(x,ub,lb,sizeof(int),myComparator);
for(y=0;y<req;y++)
{
printf("%d\n",*(x+y));
}
} 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void selectionSort(void *ptr,int cs,int es,int (*p2f)(void *,void *))
{
int w,si,iep,oep;
void *a,*b,*c;
c=(void *)malloc(es);
iep=cs-1;
oep=cs-2;
si=0;
for(int e=0;e<=oep;e++)
{
si=e;
for(int f=e+1;f<=iep;f++)
{
a=ptr+(f*es);
b=ptr+(si*es);
w=p2f(a,b);
if(w<0) si=f;
}
a=ptr+(e*es);
b=ptr+(si*es);
memcpy(c,(const void *)a,es);
memcpy(a,(const void *)b,es);
memcpy(b,(const void *)c,es);
}
free(c);
}
int myComparator(void *a,void *b)
{
int *num1=(int *)a;
int *num2=(int *)b;
return (*num1)-(*num2);
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
printf("Cannot allocate memory\n");
return 0;
}
for(int y=0;y<req;y++)
{
printf("Enter a number : ");
scanf("%d",x+y);
}
selectionSort(x,req,sizeof(int),myComparator);
for(int y=0;y<req;y++) printf("%d\n",*(x+y));
free(x);
}
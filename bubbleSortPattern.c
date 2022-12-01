//1st example
#include<stdio.h>
#include<stdlib.h>
int main()
{
int x[5],y,m,g,f,e;
for(y=0;y<5;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);	// or x+y ----  base address of x will be increased by 4*y
}
m=3;	//size-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
printf("%d      %d\n",e,f);
e++;
f++;
}
printf("----------------------\n");
m--;
}
}
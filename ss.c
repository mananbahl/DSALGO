#include<stdio.h>
int main()
{
int g,si,iep,oep;
int ptr[5];
for(int i=0;i<5;i++)
{
printf("Enter number : ");
scanf("%d",&ptr[i]);
}
oep=3;
iep=4;
for(int e=0;e<=oep;e++)
{
si=e;
for(int f=e+1;f<=iep;f++)
{
if(ptr[f]<ptr[si]) si=f;
}
g=ptr[e];
ptr[e]=ptr[si];
ptr[si]=g;
}
for(int i=0;i<5;i++) printf("%d\n",ptr[i]);
}
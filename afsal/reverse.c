#include<stdio.h>
int main()
{
int n,d=0,r=0;
printf("input=");
scanf("%d",&n);
while(n>0)
{
d=n%10;
r=(r*10)+d;
n=n/10;
}
printf("output=%d",r);
return 0;
}

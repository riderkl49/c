#include<stdio.h>
int main()
{
int n,d=0,s=0;
printf("input=");
scanf("%d",&n);
while(n>0)
{
d=n%10;
s=s+d;
n=n/10;
}
printf("output=%d",s);
return 0;
}

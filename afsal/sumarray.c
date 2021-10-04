#include<stdio.h>
int main()
{
int n,i,sum=0,a[10];
printf("enter the limit=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum=%d",sum);
return 0;
}

#include<stdio.h>
int main()
{
int a[10],n,i;
printf("enter the limit=");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[0]<a[i])
{
a[0]=a[i];
}
}
printf("largest elements of the array=%d",a[0]);
return 0;
}

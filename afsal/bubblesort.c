#include<stdio.h>
int main()
{
int a[20],n,i,j,temp=0;
printf("enter the limit=");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n-(i+1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("the sorted array=");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
gcc

#include<stdio.h>
int main()
{
int i,n,m,a[10];
printf("enter the limit=");
scanf("%d",&n);
printf("enter the elements=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value to search=");
scanf("%d",&m);
for(i=0;i<n;i++)
{
if(a[i]==m)
{
printf("the element is present in the array and its position is %d",i+1);
return 0;
}
}
printf("the element is not present in the array");
return 0;
}

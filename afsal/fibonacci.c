#include<stdio.h>
int main()
{
int i,n,f1=1,f2=1,f3;
printf("input=");
scanf("%d",&n);
printf("%d\t%d\t",f1,f2);
i=3;
do
{
f3=f1+f2;
printf("%d\t",f3);
f1=f2;
f2=f3;
i++;
}
while(i<=n);
return 0;
}


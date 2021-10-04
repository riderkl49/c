#include<stdio.h>
int main()
{
char a[50],b[50];
int i;
printf("enter the string 1 and string 2=");
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++)
{
b[i]=a[i];
}
b[i]='\0';
printf("output=%s",b);
return 0;
}

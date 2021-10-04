#include<stdio.h>
int main()
{
int n;
printf("enter a number=");
scanf("%d",&n);
switch(n)
{
case 1:printf("output=sunday");
      break;
case 2:printf("output=monday");
      break;
case 3:printf("output=tuesday");
      break;
case 4:printf("output=wednesday");
      break;
case 5:printf("output=thursday");
      break;
case 6:printf("output=friday");
      break;
case 7:printf("output=saturday");
      break;
default:printf("output=invalid");
      break;
}
return 0;
}

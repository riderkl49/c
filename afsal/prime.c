#include<stdio.h>
int main()
{
 int flag=0,n,i;
 printf("enter a number=");
 scanf("%d",&n);
 for(i=2;i<n/2;i++)
 {
 if(n%i==0)
 {
 flag=1;
 break;
 }
 }
 if(flag==1)
 printf("\n not prime");
 else
 {
 printf("\n prime");
 }
return 0;
}
 


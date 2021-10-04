#include<stdio.h>
int main()
{
int a,b,*x,*y,temp;
	printf("enter 2 numbers :");
	scanf("%d%d",&a,&b);

	x=&a;
	y=&b;

		temp=*x;
		*x=*y;
		*y=temp;


	printf("after swapping \n value of a :%d\n value of b :%d\n ",a,b);
	return 0;
}

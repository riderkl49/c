#include<stdio.h>
struct parent {
	char name[20];
	char place[20];
	int age;
};
int main()
{
	struct parent child[20];
	int limit;
	printf("enter the limit:");


	scanf("%d",&limit);
	
	for(int i=0;i<limit;i++){
		printf("enter the name:");
		scanf("%s",child[i].name);
		
		printf("enter the place :");
		scanf("%s",child[i].place);
		
		printf("enter the age:");
		scanf("%d",&child[i].age);
}

	printf("\n students list:\n");

	for(int i=0; i<limit;i++){

		printf("\n student name :%s \n student age:%d \n student place:%s",child[i].name,child[i].age,child[i].place);

	}
return 0;
}

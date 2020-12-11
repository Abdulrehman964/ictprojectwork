#include<stdio.h>
int main()
{
	int n1=0,n2=0;
	printf("Enter the first number : ");
	scanf("%d",&n1);
	printf("Enter the second number : ");
	scanf("%d",&n2);
	int *ptr1,*ptr2;
	ptr1=&n1;
	ptr2=&n2;
	if(*ptr1>*ptr2)
		printf("%d is largest",*ptr1);
	else
		printf("%d is largest",*ptr2);
}


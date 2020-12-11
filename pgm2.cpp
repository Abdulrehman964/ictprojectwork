#include<stdio.h>

void swap(int *n1,int*n2)
{
	int t=0;
	t=*n1;
	*n1=*n2;
	*n2=t;
}
int main()
{
	int n1=0,n2=0;
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	printf("Before swap\nn1=%d\nn2=%d",n1,n2);
	swap(&n1,&n2);
	printf("\nAfter Swapping \nn1=%d\nn2=%d",n1,n2);
}


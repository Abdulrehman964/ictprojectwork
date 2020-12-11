#include<stdio.h>
int factorial(int n)
{
	if(n==0||n==1)
		return n;
	else
		return(n*factorial(n-1));
}
int main()
{
	int n=0,c=0;
	printf("Enter the number whose factorial has to be calculated :  ");
	scanf("%d",&n);
	c=factorial(n);
	 printf("The factorial of %d is %d ",n,c);
	 printf("Bug");
}


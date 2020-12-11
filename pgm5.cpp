#include<stdio.h>
int sumevenindex(int *i,int *se)
{
	int j;
	for(j=0;j<10;j=j+2)
	{
			*se=*se+*i;
		i=i+2;
	}
}
int sumoddindex(int *i,int *so)
{
	int j;
	i++;
	for(j=1;j<10;j=j+2)
	{
			*so=*so+*i;
		i=i+2;
	}
}
int sortarray(int *ptr,int n)
{
	int i=0,j=0,t=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(ptr+j)>*(ptr+j+1))
			{
				t=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=t;
			}
		}
	}
}
int main()
{
	int a[100],se=0,so=0,i=0;
	for(i=0;i<10;i++)
	{
		printf("%d : ",i);
		scanf("%d",&a[i]);
	}
	sumevenindex(&a[0],&se);
	printf("Sum  of Even numbers : %d",se);
	sumoddindex(&a[0],&so);
	printf("\nSum  of Odd numbers : %d",so);
	sortarray(&a[0],10);
	printf("\nSorted array :  ");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}	
}


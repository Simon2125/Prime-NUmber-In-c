#include<stdio.h>
int isPrimeNumber(int num, int count);
int main()
{
	int num; 
	int count;
	printf("enter a number: ");
	scanf("%d",&num);
	if(count == 2)
	{
		printf("%d is a Prime Number.",num);
	}
	else
	{
		printf("%d is not a Prime Number",num);
	}
	return 0;
}
int isPrimeNumber(int num)
{
	int i, count=0;
	for(i=0;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
			return num;
		}
	}
}

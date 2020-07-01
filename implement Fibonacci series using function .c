#include<stdio.h>
int fibonacci(int n);
int main()
{
	int n;
	printf("Enter n upto which fibonacci series to be generated\n");
	scanf("%d", &n);
	fibonacci(n);
}
int fibonacci(int n)
{
	int i,fib1=0,fib2=1,fib3;
	if(n==1)
	{
		printf("%d\n", fib1);
	}
	else if(n==2)
	{
		printf("%d\t%d\t",fib1,fib2);
	}
	else
	{
		printf("%d\t%d\t",fib1,fib2);
		for(i=3;i<=n;i++)
		{
			fib3=fib1+fib2;
			fib1=fib2;
			fib2=fib3;
			printf("%d\t", fib3);
		}
	}
}
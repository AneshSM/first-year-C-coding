#include<stdio.h>
int fibonacci(int n);
int main()
{
	int n,i,x;
	printf("Enter n\n");
	scanf("%d", &n);
	printf("Fibonacci series is\n");
	for(i=0;i<n;i++)
	{
		x=fibonacci(i);
		printf("%d\t",x);
	}
}
int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else 
	{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}
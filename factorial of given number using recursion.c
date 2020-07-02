#include<stdio.h>
int factorial(int n);
int main()
{
	int n,fact;
	printf("Enter a number\n");
	scanf("%d", &n);
	fact=factorial(n);
	printf("fact is %d\n",fact);
}
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
} 
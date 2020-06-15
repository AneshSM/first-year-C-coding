#include<stdio.h>
int main()
{
	int n,r,c;
	printf("Enter the pyramid length\n");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<n-r;c++)
		printf(" ");
		for(c=1;c<=2*r-1;c++)
		printf("*");
		printf("\n");
	}
	return 0;
}

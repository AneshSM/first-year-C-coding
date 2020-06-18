#include <stdio.h>
 
int main()
{
	int a[10],i,j,n,temp;
	printf("Enter the no of array elements\n");
	scanf("%d",&n);
	printf("%d\n", n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	  printf("%d ", a[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>=1 && a[j]<a[j-1])
		{
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			j=j-1;
		}
	}
	printf("\nafter merge sort\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
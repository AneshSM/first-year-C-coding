#include<stdio.h>
struct bsort 
{
    int array[100];
};
int main()
{
    struct bsort b;
    int n,i,j,swap;
    printf("Enter the no of elements:\n");
    scanf("%d", &n);
    printf("Enter the %d integers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &b.array[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b.array[j]>b.array[j+1])
            {
                swap=b.array[j];
                b.array[j]=b.array[j+1];
                b.array[j+1]=swap;
            }
        }
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", b.array[i]);
    }
    return 0;
}
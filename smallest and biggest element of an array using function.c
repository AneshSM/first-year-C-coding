#include<stdio.h>
void largeandsmall(int a[],int n);
int main()
{
    int a[50],n,i;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largeandsmall(a,n);
}
void largeandsmall(int a[],int n)
{
    int i,large, small;
    large=small=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
        small=a[i];
        if(large<a[i])
        large=a[i];
    }
        printf("largest no. is %d\n",large);
        printf("
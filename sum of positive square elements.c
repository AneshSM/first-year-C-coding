#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[50], n, i, sum=0, flag;
    printf("Enter size:\n ");
    scanf ("%d", &n);
    printf ("Enter the array elements:\n ");
    for (i=0;i<n;i++)
    scanf ("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        flag=0;
        for (int j=1;j<a[i];j++)
        {
            if((j*j)==a[i])
            {
                flag++;
                break;
            }
        }
        if(flag>0)
        sum=sum+a[i];
    }
    printf("Sum of all positive square elements= %d\n", sum);
    return 0;
}
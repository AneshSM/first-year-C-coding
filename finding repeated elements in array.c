#include <stdio.h>
int main (void)
{
    int a[50], count=0, n, flag, k=0;
    printf("Enter size : \n") ;
    scanf("%d", &n);
    int r[n], rc=0;
    for(int i=0; i<n; i++)
    r[i]=0;
    printf("Enter the elements : \n") ;
    for (int i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Repeating elements are: ");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(j!=i && a[i]==a[j])
            {
                flag=0;
                for (int k=0; k<n; k++)
                if(r[k]==a[i])
                flag++;
                if(flag==0)
                {
                r[rc]=a[i];
                rc++;
                }
            }
        }
    }
    for (int i=0; i<rc; i++)
    printf("%d\t", r[i]);
    return 0;
}



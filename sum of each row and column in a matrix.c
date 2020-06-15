#include<stdio.h>
int main()
{
    int n, r_sum, c_sum;
    printf ("Enter the size of matrix:");
    scanf ("%d", &n);
    int a[n][n];
    printf ("Enter array elements: ");
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
    scanf ("%d", &a[i][j]);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        printf ("%d\t", a[i] [j]) ;
        printf ("\n");
    }
    for (int i=0; i<n; i++)
    {
        r_sum=0;
        {
            for (int j=0; j<n; j++)
            r_sum+=a [i] [j];
        }
        printf ("Sum of row %d=%d\n", i+1, r_sum);
    }
    printf ("\n");
    for (int i=0; i<n; i++)
    {
        c_sum=0;
        {
            for (int j=0; j<n; j++)
            c_sum+=a [j] [i];
        }
        printf ("Sum of column %d=%d\n", i+1, c_sum);
    }
    return 0;
}
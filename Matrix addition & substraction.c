#include <stdio.h>
int main ()
{
    int a[15] [15], b[15] [15], m[15] [15], r, c, i, j;
    printf ("Enter the size of 2D array: ") ;
    scanf ("%d%d", &r, &c);
    printf ("Enter the elements of array 1:\n");
    for (i=0; i<r; i++)
    for (j=0; j<c; j++)
    scanf ("%d", &a[i] [j]);
    printf ("Enter the elements of array 2:\n");
    for (i=0; i<r; i++)
    for (j=0; j<c; j++)
    scanf ("%d", &b[i] [j]) ;
    printf("Sum of array 1 & 2 is: \n") ;
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            m[i] [j]=a [i] [j]+b[i] [j];
            printf ("%d\t", m[i] [j]);
        }
        printf ("\n");
    }
    printf ("Difference of array 1& 2 is: \n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            m[i] [j]=a [i] [j]-b[i] [j];
            printf ("%d\t", m[i] [j]);
        }
        printf ("\n");
    }
    return 0;
}
#include <stdio.h>
 int main()
{
    int n,digits=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        digits++;
        n=n/10;
    }
    printf("Total numbers of digits are: %d",digits);    
}

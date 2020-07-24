#include<stdio.h>
struct add
{
    int a,b;
};
struct sum
{
    int s1;
    struct add a1;
};
int main()
{
    struct sum s;
    printf("Enters the numbers to be added\n");
    scanf("%d\n%d\n",&s.a1. a, &s.a1.b);
    printf("%d\n%d\n",s.a1.a, s.a1.b);
    s.s1=s.a1.a+s.a1.b;
    printf("\nThe sum of numbers is %d",s.s1);
}
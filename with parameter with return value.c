#include<stdio.h>
int add(int i,int j);
int main()
{
    int sum,a=10,b=20;
    sum=add(a,b);
    printf("sum is %d",sum);
    getchar();
}
int add(int i,int j)
{
    int sum;
    sum=i+j;
    return sum;
}
#include<stdio.h>
int main()
{
    char str[ 100];
    int i, sum=0;
    printf("Enter the string: \n");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        if((str[i]>= '0') && (str[i]<='9'))
        {
            sum += (str[i] - '0');
        }
    }
    printf("Sum of all digits: \n%d", sum);
    return 0;
}
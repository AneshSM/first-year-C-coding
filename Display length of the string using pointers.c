#include<stdio.h>
int stringlength(char*);
int main()
{
    char str[20];
    int length;
    printf("Enter any string:\n");
    gets(str);
    length=stringlength(str);
    printf("The length of the given string %s is:%d",str,length);
}
int stringlength(char*p)
{
    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int i,k,x;
    printf("Enter string\n");
    scanf("%s", str1);
    k=strlen(str1);
    for(i=0;i<k;i++)
    {
        str2[i]=str1[k-i-1];
    }
    printf("Reversed string str2 is %s\n", str2);
    x=strcmp(str1,str2);
    if(x==0)
    {
        printf("String is a palindrome\n");
    }
    else
    {
        printf("String is not a palindrome\n");
    }
}
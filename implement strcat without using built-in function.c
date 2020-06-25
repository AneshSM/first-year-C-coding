#include<stdio.h>
int main()
{
    char str1[20],str2[20],str3[40];
    int k,i;
    printf("Enter string1 and string2\n");
    scanf("%s%s", str1, str2);
    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
        k=k+1;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        str3[k]=str2[i];
        k=k+1;
    }
    str3[k]='\0';
    printf("Concatenated string is %s", str3);
}

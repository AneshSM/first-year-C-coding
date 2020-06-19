#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j=0;
    printf("enter any string:\n");
    scanf("%s",str1);
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
        {
            str1[i]=' ';
        }
        else
        {
            str2[j++]=str1[i];
        }
    }
    str2[j]='\0';
    printf("\nstring without vowels %s",str2);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int len1,len2,i;
	printf("Enter string1\n");
	scanf("%s", str1);
	printf("Enter string2\n");
	scanf("%s", str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1!=len2)
	{
		printf("Strings are different\n");
	}
	else
	{
		for(i=0;str1[i]!='\0';i++)
		{
			if(str1[i]!=str2[i])
			{
				printf("Strings are different\n");
				exit(0);
			}
		}
		printf("Strings are same\n");
	}
}

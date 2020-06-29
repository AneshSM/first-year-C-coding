#include <stdio.h>
int isPalindrome(int num);
int main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result = isPalindrome(num);
    if(result==1)
        printf("%d is Palindrome number",num);
    else
        printf("%d is not an Palindrome number",num);
    return 0;
}
int isPalindrome(int num)
{
    int rnum=0,r,n;
    n=num;
    while(n>0)
    {
        r=n%10;
        rnum=rnum*10+r;
        n=n/10;
    }
    if(rnum==num)
        return 1;
    else
        return 0;
}
#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i;
    printf("Enter information of students:\n");


    for (i = 0; i < 5; ++i) 
    {
        s[i].roll = i + 1;
        printf("\nFor roll number %d\n",s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("%s",s[i].firstName);
        printf("\n");
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("%f",s[i].marks);
    }
    printf("\n");
    printf("Displaying Information:\n\n");
    printf("\nRoll number\t\tName\t\tMark\n");
  
    for (i = 0; i < 5; ++i) 
    {
        printf("%d\t\t%s\t\t%f\t\t\n",s[i].roll,s[i].firstName,s[i].marks);
    }
    
}
#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
 
    char name[30];
    int id;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=5;
 
    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
    {
 
        printf("Employee %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s\n",employees[i].name);
        printf("%s\n",employees[i].name);
        
        printf("Id: ");
        scanf("%d\n",&employees[i].id);
        printf("%d\n",employees[i].id);
        
        printf("Salary: ");
        scanf("%d\n",&employees[i].salary);
        printf("%d\n",employees[i].salary);
        printf("\n");
    }
 
    
 
    printf("\nAll Employees Details \n");
    printf("\nName\t\tId\t\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t\n",employees[i].name,employees[i].id,employees[i].salary);
    }
}
#include<stdio.h>
int main()
{
   int n,a[10],i,pos,ele;
   char ch;
   printf("Enter no of elements in an array\n");
   scanf("%d",&n);
   printf("Enter the %d elements of array\n", n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\nThe array elements are \n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("\nEnter the choice\n 1 for insertion \t 2 for deletion\n");
   scanf(" %c",&ch);
   switch(ch)   
   {
     case '1': printf("Enter the postion where new element is inserted\n");
            scanf("%d",&pos);
             printf("Enter the element to be inserted\n");
             scanf("%d",&ele);
             for(i=n-1;i>=pos;i--)
             {
                 a[i+1]=a[i];
             }
             a[pos]=ele;
             n++;
             printf("The array after insertion\n");
             for(i=0;i<n;i++)
             {
             scanf("%d",&a[i]);
             printf("%d\n",a[i]);
             }
             break;
             
     case '2':printf("Enter the position where element is deleted\n");
            scanf("%d",&pos);
            printf("Enter the element to be deleted\n");
            scanf("%d",&ele);
            ele=a[pos];
            for(i=pos;i<n-1;i++)
            {
                a[i]=a[i+1];
            } 
            n--;
            printf("The array after deletion of element\n");
            for(i=0;i<n;i++)
            {
                printf("%d\n",a[i]);
            } 
            break;
            
     default:printf("invalid choice");  
   }
}

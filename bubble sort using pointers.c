#include<stdio.h>

int *a[100],i,j,item;

void main()

{

   void sort(),display(); //function declarations

   int i;

   clrscr();

   printf("\n Enter the number of elements in the first array\n");

   scanf("%d",&item); //reding elements from user

   printf("\n Enter %d numbers\n",item);

   for(i=0;i<item;++i)

   scanf("%d",&a[i]);
  
   sort(); //calling sort function to perform bubble sort

   display(); //calling display function to display elements

}

 void sort() //sort function to sort elements

 {

   int swap=1,*temp;

   for(i=0;i<item && swap==1;++i)

   {

    swap=0;

    for(j=0;j<item-(i+1);++j)

    if (a[j]>a[j+1])
    {

     temp=a[j];

    a[j]=a[j+1];

    a[j+1]=temp;

    swap=1;
   }

  }

 }


 void display() //display function

 {

  printf("\n Sorted elements are:\n");

  for(i=0;i<item;++i)

  printf("%d\n",a[i]);

  getch();

 }
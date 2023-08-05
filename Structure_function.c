#include <stdio.h>
#include <string.h>


//  Pass Structure Members To Functions

// struct student
// {
//     char name[50];
//     int rno;
//     int per;
// };

// void display(int a,int b)
// {
//     printf("Displaying information: ");
//     printf("\nRoll number: %d",a);
//     printf("\nPercentage: %d",b);
// }

// int main()
// {
//     struct student s;
//     printf("Enter name: ");
//     gets(s.name);
//     printf("\nEnter the roll number: ");
//     scanf("%d",&s.rno);
//     printf("\nEnter percentage: ");
//     scanf("%d",&s.per);
//     display(s.rno,s.per);
// }


// Return structure from the function

// struct wage 
// {
//     char name[50];
//     int wage;
// };

// struct wage employee()
// {
//     struct wage e1;
//     printf("Enter the name of the employee: ");
//     scanf("%s",&e1.name);
//     printf("\nEnter the wage: ");
//     scanf("%d",&e1.wage);
//     return e1;
// }

// int main()
// {
//     struct wage e;
//     e=employee();
//     printf("\nWage details of the employee: ");
//     printf("\nName: %s",e.name);
//     printf("\nWage: %d",e.wage);
// }


//Pass Structure by Reference

// struct car
// {
//     char name[50];
//     int seat;
//     char fuel[50];
// };

// void display(struct car *ptr)
// {
//     printf("\n---Details---");
//     printf("\nName: %s",ptr->name);



//     printf("\nSeat: %d",ptr->seat);
//     printf("\nFuel type: %s",ptr->fuel);
// }

// int main()
// {
//     struct car tata;
//     struct car *ptr1;
//     printf("Enter the model name: ");
//     scanf("%s",&tata.name);
//     printf("\nEnter the seating capacity: ");
//     scanf("%d",&tata.seat);
//     printf("\nEnter the fuel type: ");
//     scanf("%s",&tata.fuel);
//     display(&tata);

// }



// Array of structure as function argument

// struct details
// {
//     char name[50];
//     char sec;
//     float per;
// };


// void display(struct details arr[])
// {
//     int i;
//     for(i=0;i<3;i++)
//     {
//         printf("\nName: %s",arr[i].name);
//         printf("\nSection: %c",arr[i].sec);
//         printf("\nPercentage: %0.2f",arr[i].per);
//     }
//     printf("\n\n");
// }

// int main()
// {
//     struct details student[3]={
//                             {"Aisiri",'A',89.6},
//                             {"Gaurav",'B',60.40},
//                             {"Samuel",'C',98.40}
//                             };     
//     display(student);               
// }



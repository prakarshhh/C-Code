#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100;

// struct person
// {
//     int name[20];
//     int citno;
//     int salary;
// }p1; //Another way to declare a variable

// int main()
// {
// struct person p1; //Declaration of variable
//     strcpy(p1.name,"Prakarsh");
//     p1.citno=1984;
//     p1.salary=2500;
//     printf("Name: %s\n",p1.name);
//     printf("Citizenship no.: %d\n",p1.citno);
//     printf("Salary: %d",p1.salary);
// }

// Calculate area of rectangle using structure

// struct rectangle
// {
//     int lenght;
//     int Breadth;
// }a;
// int main()
// {
//     int area;
//     struct rectangle ar={5,10};
//     area=ar.Breadth*ar.lenght;
//     printf("Area= %d",area);
// }

// User input

// struct rectangle
// {
//     int length;
//     int breadth;
// }a;

// int main()
// {
//     int area;
//     printf("Enter lenght: ");
//     scanf("%d",&a.length);
//     printf("\nEnter breadth: ");
//     scanf("%d",&a.breadth);
//     area=a.length*a.breadth;
//     printf("\nArea of rectangle: %d",area);

// }

// Array of structure

// struct student
// {
//     int rollno;
//     char name[50];
// } s[5], temp;
// int main()
// {
//     int i, j;
//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter rollno.: ");
//         scanf("%d", &s[i].rollno);
//         printf("Enter name: ");
//         scanf("%s", s[i].name);
//     }
//     printf("\nBefore sorting:\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d %s\n", s[i].rollno, s[i].name);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         for(j=i+1;j<5;j++)
//         {
//             if(s[i].rollno>s[j].rollno){
//             temp=s[i];
//             s[i]=s[j];
//             s[j]=temp;
//             }
//         }
//     }
//     printf("After sorting:\n");
//     for(i=0;i<5;i++)
//     {
//         printf("%d %s\n",s[i].rollno,s[i].name);
//     }
// }

// struct cardetail
// {
//     char carname[50];
//     char model[50];
//     int year;
// };

// int main()
// {
//     struct cardetail c1={"BMW","X5",1999};
//     struct cardetail c2={"Ford","Mustang",1969};
//     struct cardetail c3={"Toyota","Corolla",2011};
//     printf("%s %s %d\n",c1.carname,c1.model,c1.year);
//     printf("%s %s %d\n",c2.carname,c2.model,c2.year);
//     printf("%s %s %d",c3.carname,c3.model,c3.year);
// }

// Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
// struct student
// {
//     int roll;
//     char name[50];
//     int age;
// };
// int main()
// {
//     int i,j,num;
//     struct student s[5];
//     for(i=0;i<5;i++)
//     {
//         printf("Student %d\n",i+1);
//         printf("Enter roll number of the student: ");
//         scanf("%d",&s[i].roll);
//         printf("Enter name of the student: ");
//         scanf("%s",&s[i].name);
//         printf("Enter age of the student: ");
//         scanf("%d",&s[i].age);
//     }

//     for(i=0;i<5;i++)
//     {
//         if(s[i].roll==2)
//         {
//             printf("Roll number:%d\n",s[i].roll);
//             printf("Name:%s\n",s[i].name);
//             printf("Age:%d\n",s[i].age);
//         }
//     }

// }

// Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no.
// , name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.

// struct marks
// {
//     int roll;
//     char name[50];
//     float che;
//     float mat;
//     float phy;
// };

// int main()
// {
//     int i,j,s;
//     float q,p;
//     struct marks mar[5];
//     struct marks per[5];
//     for(i=0;i<1;i++)
//     {
//         printf("Enter Rollnumber: ");
//         scanf("%d",&mar[i].roll);
//         printf("Enter Name: ");
//         scanf("%s",&mar[i].name);
//         printf("Enter Chemistry marks: ");
//         scanf("%f",&mar[i].che);
//         printf("Enter Maths marks: ");
//         scanf("%f",&mar[i].mat);
//         printf("Enter Physics marks: ");
//         scanf("%f",&mar[i].phy);

//     }

//     for(i=0;i<1;i++)
//     {
//         printf("Student:%d\n",i+1);
//         float percentage=((mar[i].che+mar[i].mat+mar[i].phy)/300*100);
//         printf("Percentage: %f\n ", percentage);
//     }
// }



/*Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
1 - Write a function to print the names of all the students having age 14.
2 - Write another function to print the names of all the students having even roll no.*/


// struct student
// {
//     int rno;
//     char name[50];
//     int age;
//     char add[50];
// };

// int main()
// {
//         int num,i;
//         printf("Information of how many students you want to store?\n");
//         scanf("%d",&num);
//         struct student s1[num];
//         for(i=0;i<num;i++)
//         {
//             printf("Student %d:",i+1);
//             printf("\nEnter roll number: ");
//             scanf("%d",&s1[i].rno);
//             printf("\nEnter name: ");
//             scanf("%s",&s1[i].name);
//             printf("\nEnter Age: ");
//             scanf("%d",&s1[i].age);
//             printf("\nEnter address: ");
//             scanf("%s",&s1[i].add);
//         }
//         printf("\nName of all the students having Age 14 is given below\n");
//         printf("Name:\n");
//         for(i=0;i<num;i++)
//         {
//             if(s1[i].age==14)
//             {
//                 printf("\n%s",s1[i].name);
//             }
//         }
//         printf("\nNames of all the student having even roll number is given below:\n ");
//         printf("Name:\n ");
//         for(i=0;i<num;i++)
//         {
//             if(s1[i].rno%2==0)
//             {
//                 printf("\n%s",s1[i].name);
//             }
//         }       
// }


// C Program to Store Data in Structures Dynamically
//  https://www.programiz.com/c-programming/examples/structure-dynamic-memory-allocation


// struct details
// {
//     char sub[30];
//     int marks;
// };

// int main()
// {
//     int num,i;
//     printf("Enter number of records: ");
//     scanf("%d",&num);
//     struct details std[num];
//     struct details *ptr;
//     ptr=&std;
//     ptr=(struct details *)malloc(num*sizeof(struct details));
//     for(i=0;i<num;i++)
//     {
//         printf("Enter subject and marks:\n");
//         scanf("%s %d",&(ptr+i)->sub,&(ptr+i)->marks);
//     }
//     printf("Display information:\n");
//     for(i=0;i<num;i++)
//     {
//         printf("\n%s %d",(ptr+i)->sub,(ptr+i)->marks);
//     }
// }


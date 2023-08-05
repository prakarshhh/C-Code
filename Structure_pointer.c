#include <stdio.h>
#include <string.h>

// Program to access the structure member using structure pointer and the (.) dot operator

// struct subject
// {
//     char sub_name[30];
//     int sid;
//     char sub_duration[50];
//     char subtype[50];
// };

// int main()
// {
//     struct subject sub;
//     struct subject *ptr;
//     ptr=&sub;
//     printf("\nEnter subject name: ");
//     scanf("%s",&(*ptr).sub_name);
//     printf("\nEnter subject id: ");
//     scanf("%d",&(*ptr).sid);
//     printf("\nEnter subject duration: ");
//     scanf("%s",&(*ptr).sub_duration);
//     printf("\nEnter subject type: ");
//     scanf("%s",&(*ptr).subtype);

//     printf("\nDetails: ");
//     printf("\nSubject name:\t%s",(*ptr).sub_name);
//     printf("\nSubject id:\t%d",(*ptr).sid);
//     printf("\nSubject duration:\t%s",(*ptr).sub_duration);
//     printf("\nSubject type:\t%s",(*ptr).subtype);
// }



// Program to access the structure member using structure pointer and arrow (->) operator


struct employee
{
    char name[50];
    int id;
    char gender[30];
    char city[50];
}emp1,emp2,*ptr1,*ptr2;

int main()
{
    int i;
    ptr1=&emp1;
    ptr2=&emp2;
    printf("\nEnter details of employee 1: ");
    printf("\nEnter name of the employee: ");
    scanf("%s",&ptr1->name);
    printf("\nEnter Employee id: ");
    scanf("%d",&ptr1->id);
    printf("\nEnter gender of the employee: ");
    scanf("%s",&ptr1->gender);
    printf("\nEnter city of employee: ");
    scanf("%s",&ptr1->city);
    printf("\nEnter details of the employee 2: ");
    printf("\nEnter name of the employee: ");
    scanf("%s",&ptr2->name);
    printf("\nEnter Employee id: ");
    scanf("%d",&ptr2->id);
    printf("\nEnter gender of the employee: ");
    scanf("%s",&ptr2->gender);
    printf("\nEnter city of employee: ");
    scanf("%s",&ptr2->city);
    printf("\nDetails of employee 1");
    printf("\nName: %s",ptr1->name);
    printf("\nId: %d",ptr1->id);
    printf("\nGender: %s",ptr1->gender);
    printf("\nCity: %s",ptr1->city);
    printf("\nDetails of employee 2");
    printf("\nName: %s",ptr2->name);
    printf("\nId: %d",ptr2->id);
    printf("\nGender: %s",ptr2->gender);
    printf("\nCity: %s",ptr2->city);


}
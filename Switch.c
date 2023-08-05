#include <stdio.h>
// int main(){
//     float length,breadth,radius,area;
//     int choice;
//     printf("\n 1. Calculate the area of circle ");
//     printf("\n 1. Calculate the area of Rectangle ");
//     printf("\n Enter choice (1,2) ");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:
//         printf("Enter radius: ");
//         scanf("%f",&radius);
//         area=180 * (radius*radius);
//         printf("%f",area);
//         break;
//         case 2:
//         printf("Enter length: ");
//         scanf("%f",&length);
//         printf("Enter breadth: ");
//         scanf("%f",&breadth);
//         area=length*breadth;
//         printf("%f",area);
//         break;
//         default:
//         printf("Invalid");
//     }

// }

// Write a program to display a menu addition,subtraction,division and perform operation as per user choice.
// int main(){
//     float add,sub,div,num1,num2;
//     int Choice;
//     printf("\n 1. Addition");
//     printf("\n 2. Subtraction");
//     printf("\n 3. Division");
//     printf("\n Enter choice (1,2,3): ");
//     scanf("%d",&Choice);
//     switch(Choice){
//         case 1:
//         printf("Enter first number: ");
//         scanf("%f",&num1);
//         printf("Enter second number: ");
//         scanf("%f",&num2);
//         add=num1+num2;
//         printf("%f",add);
//         break;
//         case 2:
//         printf("Enter first number: ");
//         scanf("%f",&num1);
//         printf("Enter second number: ");
//         scanf("%f",&num2);
//         sub=num1-num2;
//         printf("%f",sub);
//         break;
//         case 3:
//         printf("Enter first number: ");
//         scanf("%f",&num1);
//         printf("Enter second number: ");
//         scanf("%f",&num2);
//         div=num1/num2;
//         printf("%f",div);
//         break;
//         default:
//         printf("Invalid");

//     }
// }


//Write a program to check a given character is vowel or not using switch 

// int main(){
//     char c;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     switch(c){
//         case 'a':
//         printf("Vowel");
//         break;
//         case 'e':
//         printf("Vowel");
//         break;
//         case 'i':
//         printf("Vowel");
//         break;
//         case 'o':
//         printf("Vowel");
//         break;
//         case 'u':
//         printf("Vowel");
//         break;
//         case 'A':
//         printf("Vowel");
//         break;
//         case 'E':
//         printf("Vowel");
//         break;
//         case 'I':
//         printf("Vowel");
//         break;
//         case 'O':
//         printf("Vowel");
//         break;
//         case 'U':
//         printf("Vowel");
//         break;
//         default:
//         printf("Not a vowel");


//     }
// }


// int main(){
//     int num,a;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     a=num%2;
//     switch(a){
//         case 0:
//         printf("%d is Even.",num);
//         break;
//         case 1:
//         printf("%d is Odd",num);
//         break;
//         default:
//         printf("Invalid");
//     }
// }


#include <string.h>

struct student {
  int roll_no;
  char name[30];
  int age;
  char address[40];
};

void checkAge(struct student stud[], int n) {
  printf("Students whose age is 14\n");
  for(int i = 0; i < n; i++) {
    if(stud[i].age == 14) {
      printf("Name : %s\n", stud[i].name);
    }  
  }
}

void checkRoll(struct student stud[], int n) {
  printf("Students with even roll no.\n");
  for(int i = 0; i < n; i++) {
    if(stud[i].roll_no%2 == 0) {
      printf("Name : %s\n", stud[i].name);
    }
  }
}

void getDetails(struct student stud[], int n) {
  printf("Enter roll no.\n");
  int roll;
  scanf("%d", &roll);
  printf("Student details with given roll no.");
  for(int i = 0; i < n; i++) {
    if(stud[i].roll_no == roll) {
      printf("Roll No. : %d\n", stud[i].roll_no);
      printf("Name : %s\n", stud[i].name);
      printf("Age : %d\n", stud[i].age);
      printf("Address : %s\n", stud[i].address);
    }  
  }
}

int main() {
  int n;
  
  printf("Enter number of students");
  scanf("%d", &n);
  
  struct student stud[n]; 
  for(int i = 0; i < n; i++) {
    printf("Student %d\n",i+1);
    printf("Enter roll no. :\n");
    scanf("%d", &stud[i].roll_no);
    printf("Enter name :\n");
    scanf("%s",stud[i].name);
    printf("Enter age :\n");
    scanf("%d", &stud[i].age);
    printf("Enter address :\n");
    scanf("%s",stud[i].address);
  }
  
  checkAge(stud, n);  // function to check if age=14
  checkRoll(stud, n);  // function to check if roll no. is even
  getDetails(stud, n);  // function to get details of student with a given roll no.
  
  return 0;
}
#include <stdio.h>
#include <string.h>
// int main()
// {
//     char str[50],ch,str1[50],str2[50];
//     int i,j,k;
//     printf("Number= ");
//     gets(str);
//     printf("digit= ");
//     scanf("%c",&ch);
//     for(i=0;str[i]!='\0';i++);
//     printf("\n%d",i);
//     for(j=0;j<i;j++)
//     {
//         if(str[j]==ch){
//             str[j]=str[j+1];
//         }
//     }
//     for(i=0;str[i]!='\0';i++);
//     printf("\n%d",i);

// }

/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order*/

// int main()
// {
//     int num,target,i,j,k,sum;
//     printf("Enter size of array:\n ");
//     scanf("%d",&num);
//     int arr[num];
//     printf("Enter target:\n ");
//     scanf("%d",&target);
//     for(i=0;i<num;i++)
//     {
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("Array= ");
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<num;i++)
//     {
//         for(j=i+1;j<num;j++)
//         {
//             sum=arr[i]+arr[j];
//             if(sum==target)
//             {
//                 printf("%d %d",i,j);
//                 break;
//             }
//         }
//         if(sum==target)
//         {
//             break;
//         }
//     }

// }

// int main()
// {
//     char str[15];
//     int sum = 0, i, j;
//     printf("Enter number is roman: ");
//     gets(str);
//     for (i = 0; str[i] != '\0'; i++)
//         ;

//     for (j = 0; j < i; j++)
//     {
//         if (str[j]=='I' || str[j]=='V' || str[j]=='X' || str[j]=='L' || str[j]=='C' || str[j]=='D' || str[j]=='M')
//         {
//             if(str[j]=='I'){
//             sum = sum + 1;
//             }
//             else if(str[j]=='V')
//         }
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
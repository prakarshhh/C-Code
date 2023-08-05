#include <stdio.h>
// int main()
// {
//     char ch;
//     FILE *ptr;
//     ptr = fopen("data.txt", "r");
//     do
//     {
//         ch=fgetc(ptr);
//         printf("%c",ch);
//     }
//     while(ch!=EOF);
//     fclose(ptr);
// }

// Write data into the file usign fprintf
// int main()

// {
//     int num;
//     FILE *ptr;
//     ptr=fopen("data.txt","w");
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     fprintf(ptr,"%d",num);
//     fclose(ptr);
// }

// Read data from the file using fscanf

// int main()
// {
//     int num,n1;
//     FILE *ptr;
//     ptr=fopen("data.txt","r");
//     n1=fscanf(ptr,"%d",&num);
//     printf("%d",n1);
//     fclose(ptr);
// }

// // Write a program to count the lenght of the file

// int main()
// {
//     int count = 0,i;
//     char ch;
//     FILE *ptr;
//     ptr = fopen("data.txt", "r");
//     do
//     {
//         ch=fgetc(ptr);
//         printf("%c",ch);
//         count++;
//     }
//     while(ch!=EOF);
//     printf("\nLength of the file: %d",count);
//     fclose(ptr);
// }

// WAP to search a particular letter and print the no. of time it appeared

// int main()
// {
//     char ch,ch1;
//     int count=0;
//     FILE *ptr;
//     ptr=fopen("data.txt","r");
//     printf("\nEnter the letter you want to search: ");
//     scanf("%c",&ch1);
//     do
//     {
//         ch=fgetc(ptr);
//         if(ch==ch1)
//         {
//             count++;
//         }
//     }
//     while(ch!=EOF);
//     if(count==0)
//     {
//         printf("\n%c not appeared in the string",ch1);
//     }
//     else
//     {

//         printf("%c Appeared %d times",ch1,count);
//     }
//     fclose(ptr);

// }

// Writing to a binary file

// struct student
// {
//     char name[30];
//     int Rno;
//     int marks;
// };

// int main()
// {
//     struct student s1={"Prakarsh kashyap",53,6};
//     FILE *ptr;
//     ptr=fopen("struct.dat","wb");  
//     fread(&s1,sizeof(struct student),1,ptr);
//     printf("Name: %s");
// }   



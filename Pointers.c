#include <stdio.h>

// Examples of pointer

// int main()
// {
//     int *ptr,n=10,a;
//     ptr=&n;
//     printf("*ptr= %d\n",*ptr);
//     printf("ptr= %u\n",ptr);
//     printf("ptr= %x\n",ptr);
//     *ptr=*ptr+1;
//     printf("%d\n",n);
//     printf("%d\n",*ptr);
// }

// Write a program in C to show the basic declaration of pointer.

// int main(){
// int m=10,n,o,*z;
// printf("Pointer : Show the basic declaration of pointer\n");
// printf("----------------------------------------------------\n");
// printf("Here is m=%d , n and o are two integer variable and *z is an integer\n",m);
// z=&m;
// printf("Z strores the address of m = %x\n",z);
// printf("*Z stores the value of m = %d\n",*z);
// printf("%x\n",&n);
// }

// WAP to swap two numbers using pointers

// void swap(int *x,int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main()
// {
//     int a,b;
//     printf("Enter value of a: ");
//     scanf("%d",&a);
//     printf("Enter value of b: ");
//     scanf("%d",&b);
//     printf("\nValue of a before swapping :%d",a);
//     printf("\nValue of b before swapping :%d",b);
//     swap(&a,&b);
//     printf("\n\nValue of a after swapping : %d",a);
//     printf("\nValue of b after swapping : %d",b);
// }

// WAP to add two numbers using call by reference

// int add(int *num1, int *num2)
// {
//     int sum;
//     sum=*num1+*num2;
//     return sum;
// }

// int main()
// {
//     int n1,n2,fnc;
//     printf("Enter First number : ");
//     scanf("%d",&n1);
//     printf("Enter second number : ");
//     scanf("%d",&n2);
//     fnc=add(&n1,&n2);
//     printf("\nThe sum of %d and %d is : %d",n1,n2,fnc);

// }

// Write a program in C to find the maximum number between two numbers using a pointer.

// int maxnum(int *num1,int *num2)
// {
//     if(*num1>*num2)
//     {
//         return *num1;
//     }
//     else{
//         return *num2;
//     }
// }

// int main()
// {
//     int n1,n2,fnc;
//     printf("Enter first number: ");
//     scanf("%d",&n1);
//     printf("Enter second number: ");
//     scanf("%d",&n2);
//     fnc=maxnum(&n1,&n2);
//     printf("\n%d is the maximum number",fnc);
// }

// Accesing string via pointer

// int main()
// {
//     char str[50];
//     char *ptr;
//     gets(str);
//     printf("%s\n",str);
//     ptr=str;
//     while(*ptr!='\0')
//     {
//         printf("%c",*ptr);
//         *ptr++;
//     }

// }

// Convert lower case string to uppercase using call by reference

// void uppercase(char *str)
// {
//     int i,j,k;
//     while (*str!='\0')
//     {
//         if(*str>=97 && *str<=122)
//         {
//             *str=*str-32;
//         }
//         *str++;
//     }

// }

// int main()
// {
//     int str[50],i,j;
//     char fnc;
//     printf("Enter string in lower case: ");
//     gets(str);
//     printf("String: %s\n",str);
//     uppercase(str);
//     printf("Uppercase: %s",str);

// }

// Write a program in C to find the length of a string using call by reference

// int lenstr(char *ptr)
// {
//     int count=0;
//     while(*ptr!='\0')
//     {
//         count++;
//         *ptr++;
//     }
//     return count;
// }

// int main()
// {
//     int fnc;
//     char str[50];
//     printf("Enter string: ");
//     gets(str);
//     printf("String: %s\n",str);
//     fnc=lenstr(str);
//     printf("Lenght: %d",fnc);
// }

// Write a program in C to separate the individual characters from a string by call by reference

// char sep(char *ptr)
// {
//     printf("The character of the string are: ");
//     while(*ptr!='\0')
//     {
//         printf("%c ",*ptr);
//         *ptr++;
//     }

// }

// int main()
// {
//     int fnc;
//     char str[50];
//     printf("Enter string: ");
//     gets(str);
//     sep(str);

// }

// Write a program in C to count the total number of words in a string
// int count(char *ptr)
// {
//     int c=1;
//     while(*ptr!='\0')
//     {
//         if(*ptr==' ')
//         {
//             c++;
//         }
//         *ptr++;
//     }
//     return c;
// }

// int main()
// {
//     int fnc;
//     char str[50];
//     printf("Enter string: ");
//     gets(str);
//     fnc=count(str);
//     printf("Words: %d",fnc);
// }

// Sort string using pointer
// void sort(char *ptr)
// {
//     char temp;
//     int count=0,i,j;
//         printf("%s",ptr);
//     while(*ptr!='\0')
//     {
//         if(*ptr > *(ptr+1)){
//             temp=*ptr;
//             *ptr=*(ptr+1);
//             *(ptr+1)=temp;
//         }
//             *ptr++;
//     }
// }

// int main()
// {
//     char str[50];
//     int fnc;
//     printf("Enter string: ");
//     gets(str);
//     sort(str);
//     printf("%s",str);
// }

// Copy string using call by reference

// void copy(char *str1,char *str2)
// {
//     while(*str1!='\0')
//     {
//         *str2=*str1;
//         *str1++;
//         *str2++;
//     }

// }

// int main()
// {
//     char str[50],str1[50];
//     printf("Enter string: ");
//     gets(str);
//     copy(str,str1);
//     printf("%s",str1);
// }

// Sort string using function

// void sort(char str[])
// {
//     int i,j,k;
//     char temp;
//      for(i=0;str[i]!='\0';i++){
//         for(j=i+1;str[j]!='\0';j++){
//             if(str[i]>str[j]){
//                 temp=str[i];
//                 str[i]=str[j];
//                 str[j]=temp;
//             }
//         }
//     }
// }

// int main()
// {
//     char str[50];
//     int fnc;
//     printf("Enter string: ");
//     gets(str);
//     sort(str);
//     printf("\nSorted string: %s",str);
// }

// ARRAY POINTER

// int main()
// {
//     int arr[5] = {10, 12, 32, 23, 54};
//     int *ptr, i;
//     ptr = arr;
//     printf("%d\n",ptr[0]);
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", ptr+i);
//     }

//     printf("\nARRAY:\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr+i);
//     }
    
//     printf("\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", *(arr+i));
//     }
//     printf("\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", *(ptr+i));
//     }

        
// }



// Factorial using call by reference

// int fact(int *ptr)
// {
//     int i,j,fact=1;
//     for(i=1;i<=*ptr;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// } 

// int main(){
//     int num,fnc;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     fnc=fact(&num);
//     printf("The factorial of %d is %d",num,fnc);

// }

// Write a program in C to count the number of vowels and consonants in a string using a pointer


// int main()
// {
//     int i,j,k,countv=0,countc=0;
//     char str[50],*ptr;
//     printf("Enter string: ");
//     gets(str);
//     ptr=str;
//     while(*ptr!='\0')
//     {
//         if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U' )
//         {
//             countv++;
//         }
//         else
//         {
//             countc++;
//         }
//         ptr++;
//     }
//     printf("Number of vowels: %d",countv);
//     printf("\nNumber of consonant: %d",countc);
// }

// Write a program in C to sort an array using Pointer


// int main()
// {
//     int num,i,j,k,temp;
//     printf("Input number of elements to be stored in the array : ");
//     scanf("%d",&num);
//     int arr[num],*ptr;
//     ptr=arr;
//     printf("Input %d elements in the array:\n",num);
//     for(i=0;i<num;i++)
//     {
//         printf("Arr[%d]= ",i);
//         scanf("%d",(ptr+i));
//     }
//     for(i=0;i<num;i++)
//     {
//         for(j=i;j<num;j++)
//         {
//             if(*(ptr+i)>*(ptr+j))
//             {
//                 temp=*(ptr+i);
//                 *(ptr+i)=*(ptr+j);
//                 *(ptr+j)=temp;
//             }
//         }
//     }
//     printf("\nThe elements of the array after sorting is:\n ");
//     for(i=0;i<num;i++)
//     {
//         printf("Arr[%d]= %d\n",i,*(ptr+i));
//     }
// }



// Write a program in C to compute the sum of all elements in an array using pointers

// int main()
// {
//     int num,i,j,l,sum=0;
//     printf("Input size of an array : ");
//     scanf("%d",&num);
//     int arr[num],*ptr;
//     ptr=arr;
//     printf("Input %d elements in the array:\n",num);
//     for(i=0;i<num;i++)
//     {
//         printf("Arr[%d]= ",i);
//         scanf("%d",ptr+i);
//     }
//     for(i=0;i<num;i++)
//     {
//         sum=sum+*(ptr+i);
//     }
//     printf("\nThe sum of array is: %d",sum);
// }


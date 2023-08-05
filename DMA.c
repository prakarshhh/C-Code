#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     char *ptr;
//     int size;
//     printf("Enter size of the string: ");
//     scanf("%d",&size);
//     ptr=(char*)malloc(size);
//     if(ptr==NULL)
//     {
//         printf("Memory is not sufficient");
//     }
//     else{
//         printf("Enter %d characters: ",size);
//         scanf("%s",ptr);
//         printf("%s",ptr);
//         free(ptr);
//     }
// }

// Program to calculate the sum of n numbers entered by the user by using malloc.

// int main()
// {
//     int num,*ptr,i,sum=0;
//     printf("Enter number of elements: ");
//     scanf("%d",&num);
//     ptr=(int*)malloc(num*(sizeof(int)));
//     if (ptr==NULL)
//     {
//         printf("Insufficient memory");
//     }
//     else{
//         printf("Enter elements: ");
//         for(i=0;i<num;i++)
//         {
//             scanf("%d",&ptr[i]);
//             sum=sum+ptr[i];
//         }

//         printf("\n%d",sum);
//         free(ptr);
//     }
// }

// int main()
// {
//     int num,*ptr,i,j;
//     printf("Input total number of elements: ");
//     scanf("%d",&num);
//     ptr=(int*)malloc(num*(sizeof(int)));
//     if(ptr==NULL)
//     {
//         printf("Memory is not allocated");
//     }
//     else
//     {
//         for(i=0;i<=num;i++)
//         {
//             printf("Number %d: ",i);
//             scanf("%d",ptr+i);
//         }
//         for(i=0;i<num;i++)
//         {
//             for(j=0;j<num;j++)
//             {
//             if(i!=j){
//                 if(*(ptr+i)>*(ptr+j))
//                 {
//                     *(ptr+i)=*(ptr+j);
//                 }
//             }
//             }
//         }
//         printf("%d",ptr);

//     }
// }

// Write a program in C to read n number of values in an array and display it in reverse order using malloc
// int main()
// {
//     int i, j, *ptr, size;
//     printf("Input number of elements to be stored in the array: ");
//     scanf("%d", &size);
//     ptr = (int *)malloc(size * sizeof(int));
//     if (ptr == NULL)
//     {
//         printf("Memory is not sufficient");
//     }
//     else
//     {
//         printf("Input %d elements: \n", size);
//         for (i = 0; i < size; i++)
//         {
//             printf("Element %d: ",i);
//             scanf("%d",&ptr[i]); // or scanf("%d",ptr+i);
//         }
//         printf("Reverse array: ");
//         for(i=size-1;i>=0;i--)
//         {
//             printf("%d ",ptr[i]);
//         }
//     }
// }

// Write a program in C to read n number of values in an array and display it in reverse order using calloc

// int main()
// {
//     int i, j, *ptr, size;
//     printf("Input number of elements to be stored in the array: ");
//     scanf("%d", &size);
//     ptr = (int *)calloc(size, sizeof(int));
//     if (ptr == NULL)
//     {
//         printf("Memory is not sufficient");
//     }
//     else
//     {
//         printf("Input %d elements: \n", size);
//         for (i = 0; i < size; i++)
//         {
//             printf("Element %d: ",i);
//             scanf("%d",&ptr[i]); // or scanf("%d",ptr+i);
//         }
//         printf("Reverse array: ");
//         for(i=size-1;i>=0;i--)
//         {
//             printf("%d ",ptr[i]);
//         }
//     }
// }

// WAP to copy elements of one array into another using malloc

// int main()
// {
//     int size,i,j,*ptr,*ptr1;
//     printf("Input the number of elements to be stored in the array: ");
//     scanf("%d",&size);
//     ptr=(int*)malloc(size*sizeof(int));
//     ptr1=ptr;
//     if(ptr==NULL)
//     {
//         printf("Memory is not sufficient");

//     }

//     else
//     {
//         printf("Enter %d elements:\n",size);
//         for(i=0;i<size;i++)
//         {
//             printf("Element %d: ",i);
//             scanf("%d",&ptr[i]);
//         }
//         printf("Elements in second array: ");
//         for(i=0;i<size;i++)
//         {
//             ptr1[i]=ptr[i];
//             printf("%d ",ptr1[i]);
//         }
//     }
// }

// WAP to copy elements of one array into another using calloc

// int main()
// {
//     int size,i,j,*ptr,*ptr1;
//     printf("Input the number of elements to be stored in the array: ");
//     scanf("%d",&size);
//     ptr=(int*)calloc(size,sizeof(int));
//     ptr1=ptr;
//     if(ptr==NULL)
//     {
//         printf("Memory is not sufficient");

//     }

//     else
//     {
//         printf("Enter %d elements:\n",size);
//         for(i=0;i<size;i++)
//         {
//             printf("Element %d: ",i);
//             scanf("%d",ptr+i);
//         }
//         printf("Elements in second array: ");
//         for(i=0;i<size;i++)
//         {
//             *(ptr1+i)=*(ptr+i);
//             printf("%d ",*(ptr+i));
//         }
//     }
// }

// Realloc()

// WAP to Increase the size of an array using realloc

// int main()
// {
//     int size, moreelements, i, j, *ptr;
//     printf("Enter size of an array: ");
//     scanf("%d", &size);
//     ptr = (int *)calloc(size, sizeof(int));

//     if (ptr == NULL)
//     {
//         printf("Memory is not sufficient");
//     }
//     else
//     {
//         printf("Enter %d elements:\n", size);
//         for (i = 0; i < size; i++)
//         {
//             printf("Element %d: ", i);
//             scanf("%d", &ptr[i]);
//         }
//         printf("Elements:");
//         for (i = 0; i < size; i++)
//         {
//             printf("%d ", ptr[i]);
//         }
//         printf("\nHow many more elements you want to add in the array: ");
//         scanf("%d", &moreelements);
//         ptr = (int *)realloc(ptr, (size + moreelements) * sizeof(int));

//         printf("\nEnter %d More elements in the array:\n", moreelements);
//         for (i = size; i < (size + moreelements); i++)
//         {
//             printf("Element %d: ", i);
//             scanf("%d", &ptr[i]);
//         }
//         printf("\nNew array with %d Elements is: ", size + moreelements);
//         for (i = 0; i < (size + moreelements); i++)
//         {
//             printf("%d ", ptr[i]);
//         }
//     }
// }


// WAP to reduce the size of an array using realloc

// int main()
// {
//     int size,reducedsizze,*ptr,i;
//     printf("Enter size: ");
//     scanf("%d",&size);
//     ptr=(int*)calloc(size,sizeof(int));
//     if(ptr==NULL)
//     {
//         printf("Memory is not sufficiend");
//     }
//     else{
//         printf("Enter %d elements:\n",size);
//         for(i=0;i<size;i++)
//         {
//             printf("Element %d: ",i);
//             scanf("%d",&ptr[i]);
//         }
//         printf("\nElements are: ");
//         for(i=0;i<size;i++)
//         {
//             printf("%d ",ptr[i]);
//         }
//         printf("\nReduced size: ");
//         scanf("%d",&reducedsizze);
//         ptr=(int*)realloc(ptr,reducedsizze*sizeof(int));
//         printf("New array with %d size: ",reducedsizze);
//         for(i=0;i<reducedsizze;i++)
//         {
//             printf("%d ",ptr[i]);
//         }
//         free(ptr);
//     }
// }
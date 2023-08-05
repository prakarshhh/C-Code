#include <stdio.h>

// int main(){
//     int n[]={10,20,30,40,50};
//     int i;
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",n[i]);
//     }
// }

// Write a program to take input of array elements and print array elements
// int main(){
//     int array[5],i;
//     for(i=0;i<5;i++){
//         printf("Enter the value for %d index: ",i);
//         scanf("%d",&array[i]);
//     }
//     printf("Array elements= ");
//     for(i=0;i<5;i++){
//         printf("%d ",array[i]);
//     }
// }

// Write a program to calculate the sum of array element.

// int main(){
//     int n[5],i,j,sum=0;
//     for(i=0;i<5;i++){
//         printf("Enter the value of %d index: \n",i);
//         scanf("%d",&n[i]);
//     }
//     printf("Array elements = ");
//     for(i=0;i<5;i++){
//         printf("%d ",n[i]);
//         sum=sum+n[i];
//     }
//     printf("\nSum of elements of array = %d ",sum);
// }

// Write a program to print the array in reverse order.

// int main(){
//     int array[5],i;
//     for(i=0;i<5;i++){
//         printf("Enter the valuer for %d index: \n",i);
//         scanf("%d",&array[i]);
//     }
//     printf("Array elements= ");
//     for(i=0;i<5;i++){
//         printf("%d ",array[i]);
//     }
//     printf("\nArray elements in reverse order= ");
//     for(i=4;i>=0;i--){
//         printf("%d ",array[i]);
//     }
// }

// Write a program to count how many even and odd numbers in array list.

// int main(){
//     int array[5],i,count_even=0,count_odd=0;
//     for(i=0;i<5;i++){
//         printf("Enter the value for %d index: ",i);
//         scanf("%d",&array[i]);
//     }
//     for(i=0;i<5;i++){
//         if (array[i]%2==0){
//             count_even++;
//         }
//         else if(array[i]%2!=0){
//             count_odd++;
//         }

//     }
//     printf("Even = %d\n",count_even);
//     printf("Odd = %d",count_odd);
// }

// Write a program to copy one array element into another.

// int main(){
//     int array1[5],array2[5],i;
//     printf("Enter elements for array :\n");
//     for(i=0;i<5;i++){
//         printf("Enter the value for %d index: ",i);
//         scanf("%d",&array1[i]);
//     }
//     printf("Elements of array 1= ");
//     for(i=0;i<5;i++){
//         printf("%d ",array1[i]);
//     }
//     for(i=0;i<5;i++){
//         array2[i]=array1[i];
//     }
//     printf("\nElements of array 2= ");
//     for(i=0;i<5;i++){
//         printf("%d ",array2[i]);
//     }

// }

// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",a[n]);
//     }
//     for(i=0;i<n;i++){
//         printf("%d",a[i]);
//     }
// }

//  Write a program in C to count a total number of duplicate elements in an array

// int main()
// {
//     int num, i, j, count = 0, t = 1;
//     printf("Enter Size of array: ");
//     scanf("%d", &num);
//     int arr[num], arr1[num], arr2[num];
//     printf("\nEnter %d elements in an array:\n", num);
//     for (i = 0; i < num; i++)
//     {
//         printf("Arr[%d]= ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < num; i++)
//     {
//         arr1[i] = arr[i];
//         arr2[i] = 0;
//     }
//     for (i = 0; i < num; i++)
//     {
//         t = 1;
//         for (j = 0; j < num; j++)
//         {
//             if (arr[i] == arr1[j])
//             {
//                 arr2[j] = t;
//                 t++;
//             }
//         }
//     }
//     for (i = 0; i < num; i++)
//     {
//         if (arr2[i] == 2)
//         {
//             count++;
//         }
//     }
//     printf("Total number of duplicate item found in the array is:%d", count);
// }

// Write a program to merge two arrays into another array

#include <stdio.h>

// int main(){
//     int num1,num2,i,j;
//     printf("Enter the size of array one: ");
//     scanf("%d",&num1);
//     printf("Enter the size of array two: ");
//     scanf("%d",&num2);
//     int num3=num1+num2;
//     int arr1[num1],arr2[num2],arr3[num3];
//     for(i=0;i<num1;i++)
//     {
//         printf("Enter element %d: ",i);
//         scanf("%d",&arr1[i]);
//     }
//     printf("\n\n");
//     for(i=0;i<num2;i++)
//     {
//         printf("Enter element %d: ",i);
//         scanf("%d",&arr2[i]);
//     }
//     printf("Arr1: ");
//     for(i=0;i<num1;i++){
//         printf("%d ",arr1[i]);
//     }

//     printf("\nArr2: ");
//     for(i=0;i<num2;i++){
//         printf("%d ",arr2[i]);
//     }
//     for(i=0;i<num1;i++){
//         arr3[i]=arr1[i];
//     }

//     for(i=0,j=num1;i<num2,j<num3;i++,j++){
//         arr3[j]=arr2[i];
//     }
//     printf("\n\nArr3 Merged array: ");
//     for(i=0;i<num3;i++){
//         printf("%d  ",arr3[i]);
//     }

// }

// Write a prgram to merge one array to another

// int main(){
//     int num1,num2,i,j;
//     printf("Enter the size of array one: ");
//     scanf("%d",&num1);
//     printf("Enter the size of array two: ");
//     scanf("%d",&num2);
//     int arr1[num1],arr2[num2];
//     for(i=0;i<5;i++)
//     {
//         printf("Enter element %d: ",i);
//         scanf("%d",&arr1[i]);
//     }
//     printf("\n\n");
//     for(i=0;i<5;i++)
//     {
//         printf("Enter element %d: ",i);
//         scanf("%d",&arr2[i]);
//     }
//     printf("Arr1: ");
//     for(i=0;i<5;i++){
//         printf("%d ",arr1[i]);
//     }

//     printf("\nArr2: ");
//     for(i=0;i<5;i++){
//         printf("%d ",arr2[i]);
//     }

//     for(i=0,j=5;i<5,j<10;i++,j++){
//         arr1[j]=arr2[i];
//     }

//     printf("\nMerged array: ");
//     for(i=0;i<10;i++){
//         printf("%d ",arr1[i]);
//     }

// }

// Array insertion
// int main(){
//     int num,position,value,i,j;
//     printf("Enter the size of an array: ");
//     scanf("%d",&num);

//     printf("Enter the position: ");
//     scanf("%d",&position);

//     printf("Enter the value you want to insert in an array: ");
//     scanf("%d",&value);

//     int arr[6]={5,10,9,23,234,0};

//     for(i=5;i>=position;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[position]=arr[value];
//     for(i=0;i<=5;i++){
//         printf("%d ",arr[i]);
//     }

// }

// Deletion

// int main(){
//     int num,i,j,pos;
//     printf("Enter the number of elements in an array: ");
//     scanf("%d",&num);
//     printf("\n");
//     printf("Enter %d elements in array:\n",num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nArray: ");
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("Define the position of the array element where you want to delete: ");
//     scanf("%d",&pos);

//     for(i=pos;i<num;i++){
//         arr[i]=arr[i+1];
//     }
//     printf("\nThe resultant array: ");
//     for(i=0;i<num-1;i++){
//         printf("%d ",arr[i]);
//     }

// }

// Write a program in C to print all unique elements in an array

// int main(){
//     int i,num,j,count=0;
//     printf("Enter the number of elements in an array: ");
//     scanf("%d",&num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<num;i++){
//         count=0;
//         for(j=0;j<num;j++){
//             if(i!=j){
//                 if(arr[i]==arr[j]){
//                     count++;
//                 }
//             }
//         }
//         if(count==0){
//             printf("%d ",arr[i]);
//         }
//     }
// }

// Write a program in C to find the maximum and minimum element in an array
// int main(){
//     int num,i,j,count=0;
//     printf("Enter number of elements in an array: ");
//     scanf("%d",&num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }

//     printf("\nOriginal array: ");
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nMinimum Element: ");

//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             if(i!=j){
//                 if(arr[i]>arr[j]){
//                     arr[i]=arr[j];
//                 }
//             }
//         }
//         printf("%d ",arr[i]);
//         break;
//     }
//     printf("\nMaximum element: ");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             if(i!=j){
//                 if(arr[i]<arr[j]){
//                     arr[i]=arr[j];
//                 }
//             }
//         }
//         printf("%d ",arr[i]);
//         break;
//     }
// }

#include <stdio.h>
// Write a program in C to separate odd and even integers in separate arrays

// int main(){
//     int num,i,j=0,k=0,counte=0,counto=0,t=1;
//     printf("Enter size of the arrayy:");
//     scanf("%d",&num);
//     int arr[num],arre[num],arro[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nArray elements: ");
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nEven elements:\n");
//     for(i=0;i<num;i++){
//         if(arr[i]%2==0){
//             arre[j]=arr[i];
//             j++;
//             counte++;
//             }
//     }
//     for(i=0;i<counte;i++){
//         printf("%d ",arre[i]);
//     }
//     printf("\nOdd elements:\n");
//     for(i=0;i<num;i++){
//         if(arr[i]%2!=0){
//             arro[k]=arr[i];
//             k++;
//             counto++;
//         }
//     }
//     for(i=0;i<counto;i++){
//         printf("%d ",arro[i]);
//     }
// }

// Write a program in C to find element in an array

// int main(){
//     int i,j,num,n,s=0;
//     printf("Enter the size of an array: ");
//     scanf("%d",&num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nEnter element to search: ");
//     scanf("%d",&n);
//     for(i=0;i<num;i++){
//         if(arr[i]==n){
//             printf("%d is found at position %d\n",n,i);
//             s=1;
//         }
//     }
//     if(s==0){
//         printf("Element not present.");
//     }

// }

// Write a program in C to find how many time a number appeared in an array.

// int main(){
//     int i,j,num,n,count=0;
//     printf("Enter the size of an array: ");
//     scanf("%d",&num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nEnter element to search: ");
//     scanf("%d",&n);
//     for(i=0;i<num;i++){
//         if(arr[i]==n){
//             printf("%d is found at position %d\n",n,i);
//             count++;

//         }
//     }
//     if(count>0){
//         printf("%d has appeared %d times in the array.",n,count);
//     }
//     else{
//         printf("Element does not exist");
//     }
// }

//  Write a program in C to count the frequency of each element of an array.
int main()
{
    int num, i, j, count = 1, t = 1;
    printf("Enter size: ");
    scanf("%d", &num);
    printf("\nInput %d elements in array:\n", num);
    int arr[num], arr1[num], arr2[num];
    for (i = 0; i < num; i++)
    {
        printf("Arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < num; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }
        }
        arr1[i] = count;
    }
    for (i = 0; i < num; i++)
    {
        if (arr[i] != -1)
        {
            printf("%d occurs %d times\n", arr[i], arr1[i]);
        }
    }
}

// Inserting

// int main(){
//     int num,i,j;
//     printf("Input the size of the array: ");
//     scanf("%d",&num);
//     int arr[num+1];
//     printf("Input %d elements in ascending order.\n",num);
//     for(i=0;i<num;i++){
//         printf("Arr[%d] = ",i);
//         scanf("%d",&arr[i]);
//     }
//     int value,pos;
//     printf("\nEnter value to be inserted: ");
//     scanf("%d",&value);
//     printf("\nEnter the postion where you want to insert value: ");
//     scanf("%d",&pos);
//     printf("\nOriginal array: ");
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     for(i=num; i>pos; i--){
//         arr[i]=arr[i-1];
//     }
//     for(i=pos;i<=pos;i++){
//         arr[i]=value;
//     }
//     printf("\nAfter insert: ");
//     for(i=0;i<=num;i++){
//         printf("%d ",arr[i]);
//     }
// }

// Write a program in C to sort elements of array in ascending order

// int main(){
//     int num,i,j,temp;
//     printf("Input the size of the array: ");
//     scanf("%d",&num);
//     printf("Input %d elements in the array\n",num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("Elements of array in sorted ascending order: ");
//     for(i=0;i<num;i++){
//         for(j=i+1;j<num;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         printf("%d ",arr[i]);
//     }

// }

// Write a program in C to sort elements of array in descending order

// int main(){
//     int num,i,j,temp;
//     printf("Input the size of the array: ");
//     scanf("%d",&num);
//     printf("Input %d elements in the array\n",num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("Elements of array in sorted ascending order: ");
//     for(i=0;i<num;i++){
//         for(j=i+1;j<num;j++){
//             if(arr[i]<arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         printf("%d ",arr[i]);
//     }

// }

// Write a program in C to find the second largest element in an array

// int main(){
//     int num,i,j,temp;
//     printf("Input the size of the array: ");
//     scanf("%d",&num);
//     printf("Input %d elements in the array\n",num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     printf("\n\nArray: ");
//     for(i=0;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n\nArray elements in descending order.");
//     for(i=0;i<num;i++){
//         for(j=i+1;j<num;j++){
//             if(arr[i]<arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         printf("%d ",arr[i]);
//     }
//     printf("\n\nThe second largest element in the array is: %d",arr[1]);
// }

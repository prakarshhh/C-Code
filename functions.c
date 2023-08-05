#include <stdio.h>
//  Write a program in C to find the square of any number using the function
// int square(int x,int y){
//     int pow=1,i;
//     for(i=1;i<=y;i++){
//         pow=pow*x;
//     }
//     return pow;
// }

// int main(){
//     int base,fnc;
//     printf("Enter base: ");
//     scanf("%d",&base);
//     fnc=square(base,2);
//     printf("The square of %d is: %d",base,fnc);
// }

// Write a program in C to swap two numbers using function

// int swap(int num1, int num2)
// {
//     int num3;
//     printf("Before swapping num1=%d", num1);
//     printf("\nBefore swapping num2=%d ", num2);
//     num3 = num1;
//     num1 = num2;
//     num2 = num3;
// }
// int main()
// {
//     int n1, n2, fnc;
//     printf("Input first number:\n");
//     scanf("%d", &n1);
//     printf("Input second number:\n");
//     scanf("%d", &n2);
//     swap(n1, n2);
// }
// // Doubt

// Write a program to find factorial of a number using function

// int fact(int num){
//     int i,f=1;
//     for(i=num;i>=1;i--){
//         f=f*i;
//     }
//     return f;
// }
// int main(){
//     int num,fnc;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     fnc=fact(num);
//     printf("%d",fnc);
// }

// Write a program to reverse a number using function

// int reverse(int num){
//     int r,q,rev=0,q1,r1;
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         rev=(rev*10)+r;
//     }
//     return rev;
// }
// int main(){
//     int num,fnc;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     fnc=reverse(num);
//     printf("Reverse:%d ",fnc);
// }

// WAP to check whether a given numeber is pallindrome or not

// int pallindrome(int num){
//     int r,q,rev=0,a=0;
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         rev=(rev*10)+r;
//     }
//     return rev;
// }

// int main(){
//     int num,fnc,temp;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     temp=num;
//     fnc=pallindrome(num);
//     if(fnc==temp){
//         printf("It is a pallindrome number");
//     }
//     else{
//         printf("Not a pallindrome number");
//     }

// }

// Check perfect number

// int perfectnum(int num){
//     int i,sum=0,a=0;
//     for(i=1;i<num;i++){
//         if(num%i==0){
//             sum=sum+i;
//         }
//     }
//     if(sum==num){
//         a=1;
//     }
//     return a;
// }

// int main(){
//     int fnc,num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     fnc=perfectnum(num);
//     if(fnc==1){
//         printf("%d is a perfect number",num);
//     }
//     else{
//         printf("%d is not a perfect number",num);
//     }
// }

// Write a program to check if a number is prime or not using function

// int prime(int num){
//     int count=0,i;
//     for(i=1;i<=num;i++){
//         if(num%i==0){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int num,fnc;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     fnc=prime(num);
//     if(fnc<=2){
//         printf("Prime number ");
//     }
//     else{
//         printf("Composite");
//     }
// }

// WAP to print all prime numbers between 1 to 100 whose reverse is also a prime number

// int prime(int num){
//     int count=0,i;
//     for(i=1;i<num;i++){
//         if(num%i==0){
//             count++;
//         }
//     }
//     return count;
// }

// int reverse(int num){
//     int q,r,rev=0;
//     for(num;num>1;num=q){
//         q=num/10;
//         r=num%10;
//         rev=(rev*10)+r;
//     }
//     return rev;
// }

// int main(){
//     int i,fnc,fnc1,fnc2;
//     for(i=1;i<=100;i++){
//         fnc=prime(i);
//         if(fnc==1){
//             fnc1=reverse(i);
//             fnc2=prime(fnc1);
//             if(fnc2==1){
//                 printf("%d\n",i);
//             }
//         }
//     }
// }

// WAP to check whether a given number is emirp or not

int prime(int num){
    int i,count=0;
    for(i=1;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    return count;
}

int reverse(int num){
    int i,r,q,rev=0;
    for(num;num>=1;num=q){
        q=num/10;
        r=num%10;
        rev=(rev*10)+r;
    }
    return rev;
}

int main(){
    int num,fnc,fnc1,fnc2;
    printf("Enter number: ");
    scanf("%d",&num);
    fnc=prime(num);
    fnc1=reverse(num);
    if(fnc==1){
        fnc2=prime(fnc1);
        if(fnc2==1){
            printf("%d is an emirp number",num);
        }
        else if(fnc==1){
            fnc2=prime(fnc1);
            if(fnc2>1){
                printf("%d is a prime number but not emirp number.",num);
            }
        }
    }
    else if(fnc>1){
        printf("Not a prime number");
    }
}

// Write a program in C to check a given number is even or odd using the function.
// int evenodd(int num){
//     int e,o;
//     if(num%2==0){
//         e=printf("The entered number is even");
//         return e;
//     }
//     else{
//         o=printf("The entered number is odd");
//         return o;
//     }
// }
// int main(){
//     int num,fnc;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     fnc=evenodd(num);
//     printf(fnc);
// }

//  WAP to check a given number is neon number or not

// int square(int x){
//     int sq=1,i;
//     for(i=1;i<=2;i++){
//         sq=sq*x;
//     }
//     return sq;
// }

// int separatenum(int num,int temp){
//     int q,r,sum=0,a=0;
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         sum=sum+r;
//     }
//     if(sum==temp){
//         a=1;
//     }
//     return a;
// }
// int main(){
//     int x,fnc,fnc1,temp;
//     printf("Enter number: ");
//     scanf("%d",&x);
//     temp=x;
//     fnc=square(x);
//     fnc1=separatenum(fnc,temp);
//     if(fnc1==1){
//         printf("%d is a neon number",temp);
//     }
//     else{
//         printf("%d is not a neon number",temp);
//     }

// }

// Print sum of factorial of first n terms

// int main(){
//     int fact=1,sum=0,num,i,j;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         fact=1;
//         for(j=i;j>=1;j--){
//             fact=fact*j;
//         }
//         sum=sum+fact;
//     }
//     printf("\nSum of fact of %d terms: %d",num,sum);

// }

// Print sum of factorial of first n terms Usign function

// int factorial(int num){
//     int fact=1,i;
//     for(i=num;i>=1;i--){
//         fact=fact*i;
//     }
//     return fact;
// }

// int main(){
//     int i,num,fnc,sum=0;
//     printf("Enter number of terms: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         fnc=factorial(i);
//         sum=sum+fnc;
//     }
//     printf("Sum of fact of %d terms: %d",num,sum);
// }

// Print repunit series upto n terms

// int power(int num,int k){
//     int i,pow=1;
//     for(i=1;i<=k;i++){
//         pow=pow*num;
//     }
//     return pow;
// }

// int main(){
//     int num,i,fnc,sum=0,a;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         fnc=power(10,i);
//         sum=sum+(fnc-1)/9;
//         printf("%d + ",(fnc-1)/9);
//     }
//     printf("\nSum = %d",sum);
// }

// Write a program in C to get the largest element of an array using the function.

// int num;
// int array(int arr1[]){
//     int i,j,l;
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             if(i!=j){
//                 if(arr1[i]>arr1[j]){
//                     arr1[j]=arr1[i];
//                 }
//             }
//         }
//     }
//     l=arr1[0];
//     return l;
// }

// int main(){
//     int fnc,i;
//     printf("Input the number of elements to be stored in the array: ");
//     scanf("%d",&num);
//     int arr[num];
//     for(i=0;i<num;i++){
//         printf("Arr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
//     fnc=array(arr);
//     printf("\nThe largest element in the array is: %d",fnc);

// }

// Write a program in C to check armstrong and perfect numbers using the function

// int power(int num,int p){
//     int pow=1,i;
//     for(i=1;i<=p;i++){
//         pow=pow*num;
//     }
//     return pow;
// }

// int armstrong(int num){
//     int n,i,q,r,fnc,sum=0,temp,f=0,cube;
//     temp=num;
//     for(num;num>0;num=q){
//         q=num/10;
//         r=num%10;
//         fnc=power(r,3);
//         sum=sum+fnc;
//     }
//     if(sum==temp){
//         f=1;
//     }
//     else{
//         f=0;
//     }
//     return f;
// }

// int perfect(int num){
//     int i,sum=0,fl=0;
//     for(i=1;i<num;i++){
//         if(num%i==0){
//             sum=sum+i;
//         }
//     }
//     if(sum==num){
//         fl=1;
//     }
//     else{
//         fl=0;
//     }
//     return fl;

// }

// int main(){
//     int n,i,fnc,fnc1;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     fnc=armstrong(n);
//     if(fnc==1){
//         printf("%d is a armstrong number",n);
//     }
//     else{
//         printf("%d is not a armstrong number",n);
//     }
//     fnc1=perfect(n);
//     if(fnc1==1){
//         printf("\n%d is a perfect number",n);
//     }
//     else{
//         printf("\n%d is not a perfect number",n);
//     }
// }

// Write a program in C to print all perfect numbers in given range using the function

// int perfect(int num){
//     int i,flag=0,sum=0;
//     for(i=1;i<num;i++){
//         if(num%i==0){
//             sum=sum+i;
//         }
//     }
//     if(sum==num){
//         flag=1;
//     }
//     else{
//         flag=0;
//     }
//     return flag;
// }

// int main(){
//     int num,i,fnc,ranges,rangee;
//     printf("Enter Lowest search limit of perfect number: ");
//     scanf("%d",&ranges);
//     printf("\nEnter Lowest search limit of perfect number: ");
//     scanf("%d",&rangee);
//     printf("\nThe perfect numbers between %d to %d are:\n",ranges,rangee);
//     for(i=ranges;i<=rangee;i++){
//         fnc=perfect(i);
//         if(fnc==1){
//             printf("%d ",i);
//         }
//     }
// }

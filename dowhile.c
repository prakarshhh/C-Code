#include <stdio.h>
// write a program to print all even numbers between 1 and 100.
// int main(){
//     int i=0,a;
//     do{
//         i++;  
//         a=i%2;
//         if(a==0){
//         printf("%d\n",i);
//         }
//     }
//     while(i<=100);
    
// }


// Write a program to print all odd numbers between 1 and 100
// int main(){
//     int n=0,a;
//     do{
//         n++;
//         a=n%2;
//         if(a!=0){
//             printf("%d\n",n);
//         }
//     }
//         while (n<=100);
        
    
// }


// Write a program to print multiplication table of a number

// int main(){
//     int n,a=0,m;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//     a++;
//     m=n*a;
//     printf("%d\n",m);
//     }
//     while(a<=9);
// }

// Write a program to print sum of all even and odd numbers between 1 and 100

// int main(){
//     int n=0,sum1=0,sum2=0;
//     do{
//         n++;
//         if(n%2==0){
//             sum1=sum1+n;
//         }
//         else{
//             sum2=sum2+n;
//         }
//     }
//     while(n<=100);
//     printf("Sum of all even number between 1 and 100 is %d\n",sum1);
//     printf("Sum of all odd number between 1 and 100 is %d",sum2);
    
// }

// Write a program to print ASCII code of all alphabet 
// int main(){
//     int n=64;
//     char c;
//     do{
//         n++;
//         c=n;
//         printf("ASCII code of a character %c = %d \n",c,n);
        
//     }
//     while(n<=122);
// }

// Write a program to print fibonacci series upto 10 terms.

// int main(){
//     int n=1,m=0,a;
//     printf("%d %d ",m,n);    //Doubt



// Write a program to separate the digits of  number
// int main(){
//     int n,a,b,d;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         a=n/10;
//         b=n%10;
//         n=a;
//         printf("%d ",b);
//     }
//     while(n>=1);
// }
// // }     Doubt

//Write a program to separate the digits of  number and find the sum of it's digit

// int main(){
//     int n,a,b,sum=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         a=n/10;
//         b=n%10;
//         n=a;
//         sum=sum+b;
        
//     }
//     while(a>=1);
// printf("%d ",sum);
    
// }

//Write a program to print the biggest digit of the number
// int main(){
//     int n,a,b,c=0,d;;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         a=n/10;
//         b=n%10;
//         c=c-b;
//         n=a;
//         if(b>c){
//             printf("%d is biggest ",b);
//         }
//     }
//     while(a>=1);
// }            // Doubt



// Write a program to print reverse of a number.

// int main(){
//     int n,a,b,c=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         a=n/10;
//         b=n%10;
//         c=c*10+b;
//         n=a;
//     }
//     while(n!=0);
//     printf("%d",c);
// }

//Write a program to check whether a given number is pallindrone or not

// int main(){
//     int n,a,b,c=0,d,e,f;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         a=n/10;
//         b=n%10;
//         c=c*10+b;
//         d=c%10;
//         e=c/10;
//         f=e/10;
//         n=a;
//     }
//     while(n!=0);
//     if(f==d){
//         printf("Pallindrome");
//         }
//     else{
//         printf("Not a pallindrome");
//         }
        

// }

// Write a program to check a given number is armstrong or not 
#include<math.h>
// int main(){
//     int n,a,b,c=0,d,e;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     e=n;
//     do{
//         a=n/10;
//         b=n%10;
//         d=pow(b,3);
//         c=c+d;
//         n=a;
        
//         }
//     while(n>0);
//     if(c==e){
//         printf("Armstrong number");
//         }
//     else{
//         printf("Not a armstrong number");
//         }
// }

// Write a program to print the numbers in words

// int main(){
//     int n,a,b,c,d,e;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     do{
//         a=n/10;
//         b=n%10;
//         n=a;
//         if(b==1){
//             printf("One ");
//         }
//         else if(b==2){
//             printf("Two  ");
//         }
//         else if(b==3){
//             printf("Three ");
//         }
//         else if(b==4){
//             printf("Four ");
//         }
//         else if(b==5){
//             printf("Five ");
//         }
//         else if(b==6){
//             printf("Six ");
//         }
//         else if(b==7){
//             printf("Seven ");
//         }
//         else if(b==8){
//             printf("Eight ");
//         }
//         else if(b==9){
//             printf("Nine ");
//         }
//         else if(b==0){
//             printf("Zero ");
//         }
       

//     }
//     while(n>=1);
// }
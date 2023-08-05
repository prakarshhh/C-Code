#include <stdio.h>
// Write a program to get the factors of a given number.
// int main(){
//     int n,d,a;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(d=1;d<=n;d++){
//         a=n%d;
//         if(a==0){
//             printf("%d\n",d);
//         }
//     }
// }




// Write a program to check whether a number is perfect number or not

// #include <stdio.h>
// int main(){
//     int n,a,b,c=0,d;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(a=1;a<n;a++){
//         b=n%a;
//         if(b==0){
//             c=c+a;
//         }

//     }
//     if(c==n){
//         printf("%d is a perfect number.",n);
//     }
//     else{
//         printf("%d is a not a perfect number.",n);
//     }
// }


// Write a program to check a given number is prime or composite.


// int main(){
//     int num,prime,remainder,f=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(prime=2;prime<num;prime++){
//         remainder=num%prime;
//         if(remainder==0){
//             f=1;
//             break;
//         }
        
//     }
//     if(f==0){
//         printf("%d is a prime number",num);
//     }
//     else {
//         printf("%d is not a prime number",num);

//     }

// }



// Write a program to calculate the factorial of a number.


// int main(){
//     int num,i,fact=1;
//     printf("Enter a number :");
//     scanf("%d",&num);
//     for (i=1;i<=num;i++){
//         fact=fact*i;
//     }
//     printf("Factorial of %d = %d",num,fact);
// }


/* Write a program to read two alphabetical characters and print all characters between them 
including the given ones taking the 26 alphabet in cyclic order*/

// char main(){
//     char ch,ch1;
//     char a;
//     printf("Enter first character and second character: ");
//     scanf("%c %c",&ch,&ch1);
//     if (ch>ch1){
//     for(a=ch;a<=ch1;a++){
//         printf("%c\n",a);
//         }
//     }
//     if (ch<ch1){
//     for(a=ch;a<=90;a++){
//         printf("%c",a);

//     }
//     for(a=65;a<=ch1;a++){
//         printf("%c",a);

//     }


//     }

// }

// Write a program to print all even numbers between 1 to 100.


// int main(){
//     int num,r;
//     for(num=2;num<=100;num++){
//         r=num%2;
//         if(r==0){
//         printf("%d\n",num);
//         }
//     }
// }


// Write a program to print odd numbers between 1 to 100

// int main(){
//     int num,r;
//     for(num=1;num<=100;num++){
//         r=num%2;
//         if(r!=0){
//             printf("%d\n",num);
//         }
//     }
// }



// Write a program to print multiplication Table of a given number


// int main(){
//     int num,t,a;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(a=1;a<=10;a++){
//         t=a*num;
//         printf("%d X %d = %d\n",num,a,t);
//     }
// }



// Write a program to print the sum of all even and odd numbers between 1 to 100.

// int main(){
//     int num,r,sum1=0,sum2=0;
//     for(num=1;num<=100;num++){
//         r=num%2;
//         if(r==0){
//             sum1=sum2+num;
//         }
//         else{
//             sum2=sum2+num;
//         }
//     }
//     printf("Sum of all even numbers between 1 to 100 = %d\n",sum1);
//     printf("Sum of all odd numbers between 1 to 100 = %d\n",sum2);
// }


// Write a program to print ASCII code of all alphabets.

// int main(){
//     char ch;
//     int n;
//     for (n=65;n<=90;n++){
//         ch=n;
//         printf("The ASCII code of %c = %d\n",ch,n);
//     }
//     for (n=97;n<=122;n++){
//         ch=n;
//         printf("The ASCII code of %c = %d\n",ch,n);
//     }
// }



// Write a program to separate the digits of a number.

// int main(){
//     int num,q,r,rev=0,d,e,f,g;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         rev=rev*10+r;
//     }
//     for (rev;rev>=1;rev=d){
//         d=rev/10;
//         e=rev%10;
//         printf("%d\n",e);
//     }
// }


// Write a program to print the sum of the digits of a number.

// int main(){
//     int num,q,r,sum=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         sum=sum+r;
//     }
//     printf("%d",sum);
// }



// Write a program to print the reverse of a number


// int main(){
//     int num,q,r,rev=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         rev=rev*10+r;
//     }
//     printf("%d",rev);
// }



// Write a program to check a number is pallindrome or not 

// int main(){
//     int num,q,r,rev=0,temp;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     temp=num;
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         rev=rev*10+r;
//     }
//         if(temp==rev){
//             printf("%d is a pallindrome number.",temp);
//         }
//         else
//         {
//             printf("%d is not a pallindrome number.",temp);
//         }
// }




// Write a program to check wether a number is armstrong or not


// int main(){
//     int num,q,r,cube,arm=0,temp;

//     printf("Enter a number: ");
//     scanf("%d",&num);
//     temp=num;
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         cube=r*r*r;
//         arm=arm+cube;
//     }
//     if(arm==temp){
//         printf("Armstrong");
//     }
//     else{
//          printf("Not Armstrong");
//     }
// }


// Write a program to print the biggest digit of a number

// int main(){
//     int num,q,r,b=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         if(b<r){
//             b=r;
//         }
//     }
//     printf("%d is biggest",b);
// }


// Write a program to print the number is words

// int main(){
//     int num,q,r,rev=0,d,e;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(num;num>=1;num=q){
//         q=num/10;
//         r=num%10;
//         rev=rev*10+r;
//     }
//     for(rev;rev>=1;rev=d){
//         d=rev/10;
//         e=rev%10;
//         if(e==1){
//             printf("One ");
//         }
//         else if(e==2){
//             printf("Two ");
//         }
        
//         else if(e==3){
//             printf("Three ");
//         }
        
//         else if(e==4){
//             printf("Four ");
//         }
        
//         else if(e==5){
//             printf("Five ");
//         }
        
//         else if(e==6){
//             printf("Six ");
//         }
        
//         else if(e==7){
//             printf("Seven ");
//         }
        
//         else if(e==8){
//             printf("Eight ");
//         }
        
//         else if(e==9){
//             printf("Nine ");
//         }
        
//         else if(e==0){
//             printf("Zero ");
//         }
//     }
// }


// Write a program to to print first 10 terms of fibonacci series

// int main(){
//     int a,b,c=0,d=0,e=1;
//     printf("%d ",d);
//     for(a=1;a<=10;a++){
//         d=e;
//         e=c;
//         c=e+d;
//         printf("%d ",c);
//     }
// }



// #include <stdio.h>
// int main(){
//     int a,b,n,i;
//     char ch;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     for(i=a;i<=b;i++){
//         if(i>=1 && i<=9){
//             if(i==1){
//                 printf("one\n");
//             }
//             else if(i==2){
//                 printf("two\n");
//             }
//             else if(i==3){
//                 printf("three\n");
//             }
//             else if(i==4){
//                 printf("four\n");
//             }
//             else if(i==5){
//                 printf("five\n");
//             }
//             else if(i==6){
//                 printf("six\n");
//             }
//             else if(i==7){
//                 printf("seven\n");
//             }
//             else if(i==8){
//                 printf("eight\n");
//             }
//             else if(i==9){
//                 printf("nine\n");
//             }
            
//         }
//         else if(i>9 && i%2==0){
//             printf("even\n");
//         }
//         else if(i>9 && i%2!=0){
//             printf("odd\n");
//         }
//         }
//     }


// Write a program to display n terms of natural number and their sum.

// int main(){
//     int num,i;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         printf("%d ",i);
//     }
// }

//  Write a program in C to display the cube of the number upto given an integer.

// int main(){
//     int num,i,cube;
//     printf("Input number of terms: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         cube=i*i*i;
//         printf("Number is: %d and cube of %d is: %d\n",i,i,cube);
//     }
// }




// int main(){ 
//     int num,i,r,count=0;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     for(i=2;i<num;i++){
//         r=num%i;
//         if(r==0){
//             // printf("%d",i);
//             count=count+1;
//             if(count>0){
//                 printf("not Prime");
//             }
//             else{
//                 printf("Prime");
//             }
//         }
//     }
//     printf("%d",count);
// }



// Write a program in C to display the n terms of odd natural number and their sum

// int main(){
//     int num,i,j,r,k,s=0,count=0,sum=0;
//     printf("Input number of terms: ");
//     scanf("%d",&num);
//     printf("The odd numbers are : ");
//     for(i=1;i>=s;i++){
//         s=s+1;
//         r=s%2;
//         if(r!=0){
//             printf("%d ",s);
//             count=count+1;
//             sum=sum+s;
//         }
//         if(count>=num){
//             break;
//         }
//     }
//     printf("\nThe sum of odd natural number Upto %d terms : %d",num,sum);
// }



//  Write a program in C to display the n terms of square natural number and their sum. Go to the editor
// 1 4 9 16 ... n Terms

#include <math.h>
// int main(){
//     int i,j,num,count=0,s=0,square;
//     printf("Input the number of terms: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         square=i*i;
//         printf("%d ",square);
    
//     }
// }

int main()
{
    int arr[6]={1,1,2,2,2,3,3};
    int i,j;
    for(i=0;i<6-1;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}
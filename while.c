// Write a prgram to print all even numbers between 1 to 100.
#include <stdio.h>
// int main(){
//     int n=2,a,b;
//     while(n<=100){
//         a=n%2;
//         if(a==0){
//             printf("%d\n",n);
//         }
//         n++;
//     }
// }

// Write a program to print all odd numbers between 1 to 100.

// int main(){
//     int n=1,a,b;
//     while(n<=100){
//         a=n%2;
//         if(a!=0){
//             printf("%d\n",n);
//         }
//         n++;
//     }
// }

// Write a program to print multiplication table of a given number

// int main(){
//     int n,t=1,a,c;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(t<=10){
//     a=n*t;
//     printf("%d X %d = %d\n",n,t,a);
//     t++;
//     }
// }


// Write a program to print the sum of all even and odd numbers between 1 to 100.

// int main(){
//     int n=1,s=0,s1=0,a,b;
//     while(n<=100){
//         if(n%2==0){
//             s=s+n;
            
//         }
//         else if(n%2!=0){
//             s1=s1+n;
            
//         }
//         n++;
//     }
//     printf("Sum of all Even numbers between 1 to 100 is %d\n",s);
//     printf("Sum of all Odd numbers between 1 to 100 is %d",s1);
// }


// Write a program to print the ASCII of all alphabet

// int main(){
//     int n=65,a,b;
//     char c;
//     while (n<=122){
//         c=n;
//         printf("ASCII code of %c is %d\n",c,n);
//         n++;
//     }
    
// }


// Write a program to separate the digits of a number

// int main(){
//     int n,a,b,c=0,d,e,f,g;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         c=c*10+b;
//         n=a;
//     }
//     while(c>=1){
//         f=c/10;
//         e=c%10;
//         printf("%d\n",e);
//         c=f;
//     }
// }



// Write a program to print the sum of the digits.


// int main(){
//     int n,a,b,s=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         s=s+b;
//         n=a;
//     }
//     printf("%d",s);
// }

// Write a program to print the reverse of a number

// int main(){
//     int n,a,b,c=0,d;
//     printf("Enter a number: " );
//     scanf("%d",&n);
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         c=c*10+b;
//         n=a;
//     }
//     printf("%d",c);
// }


// Write a program to check whether a number is pallindrome or not 

// int main(){
//     int n,a,b,c=0,d,e,f;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     d=n;
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         c=c*10+b;
//         // d=c%10;
//         // e=c/10;
//         // f=e/10;
//         n=a;
//     }
//     if(c==d){
//         printf("Pallindrone");
//     }
//     else{
//         printf("Not a pallindrone");
//     }
// }

// Write a program to check whether a number is armstrong or not 
// #include <math.h>
// int main(){
//     int n,a,b,c=0,d,e=0,f;
    
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     f=n;
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         c=c*10+b;
//         d=pow(b,3);
//         e=e+d;
//         n=a;
//     }
    
//     if(e==f){
//         printf("Armstrong");
//     }
//     else{
//         printf("Not a armstrong");
//     }
// }


// Write a program to print the number in words.

// int main(){
//     int n,a,b,c,d;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         if(b==1){
//             printf("One\n");
//         }
//         else if(b==2){
//             printf("Two\n");
//         }
//         else if(b==3){
//             printf("Three\n");
//         }
//         else if(b==4){
//             printf("Four\n");
//         }
//         else if(b==5){
//             printf("Five\n");
//         }
//         else if(b==6){
//             printf("Six\n");
//         }
//         else if(b==7){
//             printf("Seven\n");
//         }
//         else if(b==8){
//             printf("Eight\n");
//         }
//         else if(b==9){
//             printf("Nine\n");
//         }
//         else if(b==0){
//             printf("Zero\n");
//         }
//         n=a;
        
//     }
// }


// Write a program to print words in number.
// int main(){
//     int n,a,b,c=0,d,e,f,g;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         c=c*10+b;
//         n=a;

//     }
//     while(c>=1){
//         d=c/10;
//         e=c%10;
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
//         if(e==8){
//             printf("Eight ");
//         }
//         else if(e==9){
//             printf("Nine ");
//         }
//         else if(e==0){
//             printf("Zero ");
//         }
//         c=d;
//     }
// }



// Write a program to find the biggest digit from a number.

// #include <stdio.h>
// int main(){
//     int n,a,b,c=0,d,e;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while(n>=1){
//         a=n/10;
//         b=n%10;
//         if(c<b){
//             c=b;
//         }
//         n=a;
//     }
//     printf("%d is biggest ",c);
// }


// Write a program to check whether a number is a pallindrome or not
#include <stdio.h>
// int main(){
//     int n,a,b,c=0,d,e,f;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     f=n;
//     while(n>0){
//         d=n%10;
//         c=c*10+d;
//         n=n/10;
//     }
//     if(f==c){
//         printf("Pallindrome");
//     }
//     else{
//         printf("Not a pallindrome");
//     }
// }

// Write a program to print the first 10 terms of a fibonacci series

int main(){
    int i=1,p=0,c=1,n=0;
    while (i<=10){
        p=c;
        c=n;
        n=p+c;
        i++;
        printf("%d ",n);
    }
}
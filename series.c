// Print the sum of this series. 1!+2!+3!+.....n!
// int main(){
//     int i,j,fact=1,num,sum=0;
//     printf("Enter number of terms: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         fact=1;
//         for(j=1;j<=i;j++){
//             fact=fact*j;
//         }
//         sum=sum+fact;
//     }
//         printf("%d ",sum);
// }



// Print the sum of this series. 1/1!+1/2!+1/3!+.....1/n!


// int main(){
//     float i,j,fact=1,num;
//     float sum=0,s;
//     printf("Enter a number: ");
//     scanf("%f",&num);
//     for (i=1;i<=num;i++){
//         fact=fact*i;
//         s=1/fact;
//         sum=sum+s;

//     }
//     printf("%f ",sum);
// }



// Print the sum of this series. 1/1!+2/2!+3/3!+.....n/n!.


// int main(){
//     float i,fact=1,num,sum=0,s;
//     printf("Enter a number: ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         fact=fact*i;
//         s=i/fact;
//         sum=sum+s;
//     }

//     printf("%f",sum);
// }


// Series - 1^2+2^2+3^3+....n^2
#include <stdio.h>
#include <math.h>
// int main(){
//     float num,i,sum=0,s;
//     printf("Enter a number: ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         s=pow(i,2);
//         sum=sum+s;

//     }
//     printf("%f",sum);
// }

// series - x + x^2 + x^3 + x^4 + ------- x^n


// int main(){
//     float x,num,i,sum=0,s;
//     printf("Enter value of x: ");
//     scanf("%f",&x);
//     printf("Enter value of n: ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         s=pow(x,i);
//         sum=sum+s;
//     }
//     printf("%f",sum);
// }




// series - x + x/2 + x/3 + x/4 + ------- x/n


// int main(){
//     float i,j,sum=0,s,num,x;
//     printf("Enter value of x : ");
//     scanf("%f",&x);
//     printf("Enter value of n : ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         s=x/i;
//         sum=sum+s;

//     }
//     printf("%f",sum);
    
// }



// series - x^1-x^2+x^3-x^4-------x^n
// int main(){
//     float x,num,sum=0,s,r;
//     int i;
//     printf("Enter the value of x : ");
//     scanf("%f",&x);
//     printf("Enter the value of n : ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         s=pow(x,i);
//         r=i%2;
//         if(r!=0){
//             sum=sum+s;
//         }
//         else if(r==0){
//             sum=sum-s;
//         }

//     }
//     printf("%f",sum);
// }




// 9 + 99 + 999 + 9999 
// int main(){
//     float num,sum=0,i,series,n=9;
//     printf("Input the Number of terms: ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         sum=sum+n;
//         printf("%.2f  ",n);
//         n=n*10+9;
        
//     }
//     printf("\n%.2f",sum);
    



// }



// 1+x+x^2/2!+x^3/3!+.

#include <math.h>
// int main(){
//     float num ,x ,i,j,fact=1,sum=0,series;
//     printf("Enter the value of x: ");
//     scanf("%f",&x);
    
//     printf("Input number of terms : ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         for(j=1;j<=i;j++){
//             fact=fact*j;
//             series=pow(x,j)/fact;
//             sum=sum+series;
//         }

//     }
//     printf("%f",sum+1);
    
// }




// x - x^3 + x^5 - x^7 

// int main(){
//     float i,num,x,j,series,sum=0,r=0;
//     int count=0;
//     printf("Enter value of x: ");
//     scanf("%f",&x);
    
//     printf("Input number of terms: ");
//     scanf("%f",&num);

//     for(i=1;i<=num;i=i+2){
//         series=pow(x,i);
//         count++;
//         r=count%2;
//         if(r==0){
//             sum=sum-series;
//         }
//         else if(r!=0){
//             sum=sum+series;
//         }
//         if(count==num){
//             break;
//         }
        

//     }
//     printf("%f",sum);
// }
    



// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

// int main(){
//     float num,i,j,series,sum,n=1;
//     printf("Enter number of terms: ");
//     scanf("%f",&num);
//     for(i=1;i<=num;i++){
//         sum=sum+n;
//         n=n*10+1;
//     }
//     printf("%0.2f ",sum);
// }




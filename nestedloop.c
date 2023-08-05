#include <stdio.h>

// Write a program in C to display the multiplication table vertically from 1 to n


// int main(){
//     int num,i,j,t;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         for(j=1;j<=10;j++){
//             t=i*j;
//             printf("%d x %d = %d\n",i,j,t);
//         }
//     }
// }




// Write a program to print all prime numbers between 1 to 100


// int main(){
//     int num,i,j,p=0,r;
//     for(i=1;i<=100;i++){
//         for(j=1;j<=i;j++){
//             r=i%j;
//             if(r==0){
//                 p++;
//             }

//         }
//         if(p<=2){
//             printf("%d ",i);
//         }
//         p=0;   
//     }     
// }

    

// Write a program to print all armstrong number between 100 to 999
// int main(){
//     int i,j,q,r,c,s=0,temp;
//     for(i=100;i<=999;i++){
//         temp=i;
//         s=0;
//         for(j=i;j>0;j=q){
//             q=j/10;
//             r=j%10;
//             c=r*r*r;
//             s=s+c;
            
//         }
//         if(s==temp){
//             printf("%d ",temp);
//     }
//     }
// }



// Write a program to check whether a given number is strong or not

// int main(){
//     int num,i,j,r,q,s=0,fact=1,temp;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     temp=num;
//     for(num;num>=1;num=q){
//         fact=1;
//         q=num/10;
//         r=num%10;
//         for(j=1;j<=r;j++){
//             fact=fact*j;
//         }
//         s=s+fact;
//     }
//     if(s==temp){
//         printf("%d is a strong number.",temp);
//     }
//     else{
//         printf("%d is not a strong number. ",temp);
//     }
// }


// Write a program to print the factorial of all number between 1 to 10

// int main(){
//     int i,j,fact=1;
//     for(i=1;i<=10;i++){
//         fact=1;
//         for(j=1;j<=i;j++){
//             fact=fact*j;
//         }
//         printf("Factorial of %d = %d\n",i,fact);
//     }
// }




// Write a c program to find the perfect numbers within a given number of range
int main(){
    int start,end,i,j,sum,r,temp;
    printf("Input the starting range of number: ");
    scanf("%d",&start);
    printf("Input the ending range of number: ");
    scanf("%d",&end);
    printf("The perfect numbers within given range: ");
    for(i=start;i<=end;i++){
        temp=i;
        sum=0;
        for(j=1;j<i;j++){
                r=i%j;
                if(r==0){
                sum=sum+j;
                }   
            }
                if(sum==temp){
                    printf("%d ",i);
                }
        }
}

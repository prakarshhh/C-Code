#include <stdio.h>
// int main(){
//     int i=1;
//     top:
//     printf("%d\n",i);
//     i++;
//     if (i<=10){
//         goto top;
//     }
// }

// Write a program to print all even number between 1 to 100 using goto.
// int main(){
//     int i=1,a;
//     even:
//     i++; 
//     if(i%2==0){
//         printf("%d\n",i);
//     }
//     if(i<=100){
//         goto even;
//     }
    
// }


// Write a program to print all odd numbers between 1 to 100 using goto
// int main(){
//     int i=1;
//     odd:
//     i++;
//     if(i%2!=0){
//         printf("%d\n",i);

//     }
//     if(i<=100){
//         goto odd;
//     }
// }

// Write a program to print the multiplication table of the given  number

int main(){
    int n,a=0,o;
    printf("Enter a number: ");
    scanf("%d",&n);
    t:
    a++;
    o=a*n;
    
    printf("%d\n",o);
    if(a<10){
        goto t;
    }
    
}





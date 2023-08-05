#include <stdio.h>
// Pattern 1
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Pattern 2
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Pattern 3
// int main(){
//     int i,j;
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// Pattern 4
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// Pattern 5
// int main(){
//     int i,j;
//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=i;j<=5;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=i;j<=5;j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     char i;
//     char j;
//     for(i=65;i<=69;i++ ){
//         for(j=65;j<=i;j++){
//             printf("%c ",j);

//         }
//         printf("\n");
//     }
// }

// int main(){
//     char i,j;
//     for(i=65;i<=69;i++){
//         for(j=65;j<=i;j++){
//             printf("%c ",i);
//         }
//         printf("\n");
//     }
// }

// int main(){

#include <stdio.h>
// int main(){
//     int i,j,k,l,num;
//     printf("Enter num: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         for(j=i;j<num;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("*");

//         }

//     printf("\n");
//     }
// }

// int main()
// {
//     int i, j, k, l;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = i; j < 5; j++)
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         for (l = 1; l< i; l++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }


// int main(){
//     int i,j,k,num=1;
//     for(i=1;i<=5;i++){
        
//         for(j=1;j<=i;j++){
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }
// }


int main(){
    int i,j,n=1;
    for(i=1;i<=5;i++){
        
        for(j=i;j>=1;j--){
            printf("%d ",j%2);
            n=n*0;
        }
        
        printf("\n");
    }
}
//  Write a program in C for a 2D array of size 3x3 and print the matrix
// int main(){
//     int i,j,arr[3][3];
//     printf("Input elements in a matrix:\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//         printf("Element- [%d] [%d]: ",i,j);
//         scanf("%d",&arr[i][j]);
//     }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// or


// int main(){
//     int num,i,j;
//     printf("Enter the size of matrix: ");
//     scanf("%d",&num);
//     int arr[num][num];
//     printf("Input elements in the matrix:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("Arr[%d][%d]= ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nThe matrix is:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

// }

// Write a program in C for addition of two Matrices of same size.

// int main(){
//     int num,i,j;
//     printf("Enter the size of square matrix(less than 5): ");
//     scanf("%d",&num);
//     printf("Input elements in the first matrix : \n");
//     int arr[num][num],arr1[num][num],arrs[num][num];
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("Element [%d].[%d]: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("Input elements in the first matrix : \n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("Element [%d].[%d]: ",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     printf("The first matrix: \n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The second matrix: \n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
    
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             arrs[i][j]=arr[i][j]+arr1[i][j];
//         }
//     }
//     printf("The Addition of two matrix is : \n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arrs[i][j]);
//         }
//         printf("\n");
//     }
// }


// Write a program in C for Subtraction of two Matrices of same size.

// int main(){
//     int num,i,j;
//     printf("Input the size of the square matrix(less than 5): ");
//     scanf("%d",&num);
//     int arr1[num][num],arr2[num][num],arrs[num][num];
//     printf("\nInput elements in the first matrix:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("Arr[%d][%d]= ",i,j);
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     printf("\n\nInput elements in the second matrix:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("Arr[%d][%d]= ",i,j);
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     printf("\n\nThe first matrix:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\nThe Second matrix:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arr2[i][j]);
//             ;
//         }
//         printf("\n");
//     }
//     printf("\n\nThe Subtraction of two matrix is:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             arrs[i][j]=arr1[i][j]-arr2[i][j];
//         }
//     }
   
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arrs[i][j]);
//         }
//         printf("\n");
//     }
    
// }

// Write a program in C to find transpose of a given matrix.

// int main(){
//     int r,c,i,j;
//     printf("Input rows: ");
//     scanf("%d",&r);
//     printf("\nInput column: ");
//     scanf("%d",&c);
//     int arr[r][c],arr1[c][r];
//     printf("\nInput element in the matrix:\n");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             printf("Arr[%d][%d]= ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nThe first matrix:\n");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<c;i++){
//         for(j=0;j<r;j++){
//             arr1[i][j]=arr[j][i];
//         }
//     }
//     printf("\nThe Transpose matrix:\n");
//     for(i=0;i<c;i++){
//         for(j=0;j<r;j++){
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
    
// }

// Write a program in C to find sum of right diagonals of a matrix

// int main(){
//     int num,i,j;
//     printf("Input the size of the square matrix: ");
//     scanf("%d",&num);
//     int arr[num][num],sum=0;
//     printf("\nInput elements in the matrix:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("Arr[%d][%d]= ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nThe matrix is:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             if(i==j){
//                 sum=sum+arr[i][j];
//             }
//         }
//     }
//     printf("\nAddition of the right diagonal element is:%d",sum);
// }


// Write a program in C to find sum of left diagonals of a matrix

// int main(){
//     int num,i,j;
//     printf("Input the size of the square matrix: ");
//     scanf("%d",&num);
//     int arr[num][num],sum=0,m=num;
//     printf("\nInput elements in the matrix:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("Arr[%d][%d]= ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\nThe matrix is:\n");
//     for(i=0;i<num;i++){
//         for(j=0;j<num;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=0;i<num;i++){
//         m=m-1;
//         for(j=0;j<num;j++){
//             if(j==m){
//                 sum=sum+arr[i][j];
//             }
//         }
//     }
//     printf("Addition of left diagonal element is %d",sum);
// }
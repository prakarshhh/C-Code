#include<stdio.h>
#include<math.h>

// Convert Decimal number to binary 
// int main(){
//      int num,q,r,arr[15],i=0,j,count=0;
//      printf("Enter any decimal number: ");
//      scanf("%d",&num);
//      for(num;num!=0;num=q){
//         q=num/2;
//         r=num%2;
//         count++;
//         arr[i]=r;
//         i++;
//      }
//      printf("The binary value is: ");
//      for(j=count-1;j>=0;j--){
//          printf("%d",arr[j]);
//      }
// }



// Convert binary to decimal.
int main(){
    int num,i=0,j,q,r,arr[15],count=0,n,sum=0,s;
    printf("Enter any binary number: ");
    scanf("%d",&num);
    for(num;num>=1;num=q){
        q=num/10;
        r=num%10;
        count++;
        arr[i]=r;
        i++;
    }
    for(i=0;i<count;i++){
        n=arr[i];
        s=n*pow(2,i);
        sum=sum+s;
    }
    printf("The decimal value = %d",sum);
}
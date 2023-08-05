// Write a program to check a given character is vowel or not
# include<stdio.h>
// char main(){
//     char c;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I'|| c=='O'||c=='U'){
//         printf("Vowel.");

//     }
//     else{
//         printf("Consonant.");
//     }

// }


// Write a program to check a given character is alphabet or not

// char main(){
//     char c;
//     int n;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     n=c;
//     if (n>=65 && n<=122){
//         printf("It's a alphabet.");
//     }
//     else {
//         printf("Not a alphabet.");
//     }
    
// }

// Write a program to check a given character is upper case or not

// char main(){
//     char c;
//     int n;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     n=c;
//     if(n>=65 && n<=90){
//         printf("Upper case ");
//     }
//     else{
//         printf("Not a upper case ");
//     }
    
// }

//Write a program to check a given character is lower case or not.

// char main(){    
//     char c;
//     int n;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     n=c;
//     if(n>=97 && n<=122){
//         printf("Lowercase.");

//     }
//     else{
//         printf("Not a lowercase.");
//     }
// }

//Write a program to check whether a given year is leap year or not.

// int main(){
//     int year;
//     printf("Enter year: ");
//     scanf("%d",&year);
//     // It is a leap year if it is perfectly divisible by 400
//     if(year%400==0){
//         printf("Leap year.");
//     }
//     // Not a leap year if it is not divisible by 400 but divisible by 100 
//     else if(year%100==0){
//         printf("Not a leap year.");
//     }
//     // leap year if it is not divisible by 100 but divisible by 4.
//     else if(year%4==0){
//         printf("Leap year.");
//     }
//     else{
//         printf("Not a leap year.");
//     }
// }

//Write a program to check given character is alphabet number or special character.

// int main(){
//     char c;
//     int n;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     n=c;
//     if(n>=65 && n<=122){
//         printf("Alphabet.");
//     }
//     else if(n>=48 && n<=57){
//         printf("Number.");
//     }
//     else{
//         printf("Special character.");
//     }
// }

// Write a program to check a given number is negative positive or zero.

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     if(n>0){
//         printf("Positive");
//     }
//     else if(n<0){
//         printf("Negative");
//     }
//     else {
//         printf("Zero");
//     }
// }

// Write a program to check a given number is single digit double digit or three digit number.
// int main(){
//     float  a,b;
//     printf("Enter a number: ");
//     scanf("%f",&a);
//     b=a/2;
//     if(b>=1 && b<=4.5){
//         printf("Single digit number.");
//     }
//     else if(b>=5 && b<=49.5){
//         printf("Two digit number");
//     }
//     else if (b>=50  && b<=499.5){
//         printf("Three digit number ");
    
//     }
//     else{
//         printf("Single digit number.");
//     }
    
    
// }

// Write a program to find the biggest number among three numbers.

// int main(){
//     float num1,num2,num3;
//     printf("Enter First number: ");
//     scanf("%f",&num1);
//     printf("Enter Second number: ");
//     scanf("%f",&num2);
//     printf("Enter Third number: ");
//     scanf("%f",&num3);
//     if (num1 >num2 && num1>num3){
//         printf("%f is biggest ",num1);
//     }
//     else if (num2 >num1 && num2>num3){
//             printf("%f is biggest ",num2);
//     }
//     else{
//             printf("%f is biggest ",num3);
//     }
// }


//Write a program to find the biggest number among three numbers using binary (-) operator

int main(){
    float num1,num2,num3;
    printf("Enter first number : ");
    scanf("%f",&num1);
    printf("Enter Second number : ");
    scanf("%f",&num2);
    printf("Enter Third number : ");
    scanf("%f",&num3);
    
    if(num1-num2>0 && num1-num3>0){
        printf("%f is greatest",num1);
    }
    else if(num2-num1>0 && num2-num3>0){
        printf("%f is greatest",num2);
    }
    else {
        printf("%f is greatest",num3 );
    }

        
}

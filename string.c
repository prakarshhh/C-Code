#include <stdio.h>
#include <string.h>

// Write a program in C to input a string and print it.
// int main(){
//     char str[50];
//     printf("Input the string: ");
//     gets(str);
//     printf("\nThe string you entered is : %s",str);
// }

// Write a program in C to find the length of a string

// int main(){
//     char str[50];
//     int i=0;
//     printf("Input the string: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++);
//     printf("%s",str);
//     printf("\nLength of the string is: %d",i);
// }


// Write a program in C to separate the individual characters from a string
// int main(){
//     char str[50];
//     int i;
//     printf("Input the string: ");
//     gets(str);
//     printf("\nThe characters of the string are:\n");
//     for(i=0;str[i]!='\0';i++){
//         printf("%c ",str[i]);
        
//     }

// }


// Write a program in C to print individual characters of string in reverse order

// int main(){
//     char str[50];
//     int i,j;
//     printf("Input the string: ");
//     gets(str);
//     for(i=0;str[i]!=0;i++);
//     printf("\nThe characters of the string in reverse are :\n");
//     for(j=i-1;j>=0;j--){
//         printf("%c ",str[j]);
//     }
// }


// Write a program to count number of vowel in a given string

// int main(){
//     char str[50];
//     int i,j,count=0;
//     printf("Input the string: ");
//     gets(str);
//     printf("\nString:%s",str);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]=='a' || str[i]=='A' || str[i]=='E' || str[i]=='e' || str[i]=='i' || str[i]=='I' || str[i]=='O' || str[i]=='o' || str[i]=='u' || str[i]=='U'){
//             count++;
//         }
//     }
//     printf("\n\nNumber of vowels:%d",count);
// }


// Write a program to convert uppercase string to lower case
// Doubt
// int main(){
//     char str[50];
//     char c;
//     int n,a;
//     int i,j;
//     printf("Input a string in upper case: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]>64 && str[i]<91){
//             str[i]=str[i]+32;
//         }
//     }
//     printf("String in lower case: %s",str);
// }

// Write a program to count number of spaces in string

// int main(){
//     char str[50];
//     int i,j,space=0;
//     printf("Input the string: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++)
//     {
//         if(str[i] == ' '){
//             space++;
//         }
//     }
//     printf("\n%s",str);
//     printf("\nNumber of blank spaces= %d",space);
//     return 0;
// }


// Write a program to count how many words in string


// int main(){
//     char str[100];
//     int i,j,word=1;
//     printf("Input the string: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]==' '){
//             word++;
//         }
//     }
//     printf("\nThe total number of words in this string:%d",word);
// }


// Write a program to print each word of a string in new line

// int main(){
//     char str[50];
//     int i,j;
//     printf("Input string: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]==' '){
//             printf("\n");
//         }
//         else{
//             printf("%c",str[i]);
//         }
//     }
// }


// Write a program to sort string in alphabetical order

// int main(){
//     char str[50];
//     int n,m,i,j,temp;
//     printf("Input the string: ");
//     gets(str);
    // printf("\nOriginal string: %s",str);
//     for(i=0;str[i]!='\0';i++){
//         for(j=i+1;str[j]!='\0';j++){
//             if(str[i]>str[j]){
//                 temp=str[i];
//                 str[i]=str[j];
//                 str[j]=temp;
//             }          
//         }
//     }
//     printf("\nSorted string: %s",str);
// }


// Write a program to copy one string into another

// int main(){
//     char str[50],str1[50];
//     int i,j;
//     printf("Input String: ");
//     gets(str);
//     printf("\nOriginal string: %s",str);
//     for(i=0;str[i]!='\0';i++){
//         str1[i]=str[i];
//     }
//     str1[i]='\0';
//     printf("\nCopied string: %s",str1);
// }


// Write a program to input a string which contain alpha numeric values and print the frequency of each number between 0 to 9;
// int main(){
//     char str[50];
//     int i ,k;
//     int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
//     printf("Input the string with alphanumeric values: ");
//     gets(str);
//     printf("\n\nOriginal string: %s",str);
//     for(i=0;str[i]!='\0';i++){
//         if (str[i]==48){
//             count0++;
//         }
//         else if (str[i]==49){
//             count1++;
//         }
//         else if (str[i]==50){
//             count2++;
//         }
//         else if (str[i]==51){
//             count3++;
//         }
//         else if (str[i]==52){
//             count4++;
//         }
//         else if (str[i]==53){
//             count5++;
//         }
//         else if (str[i]==54){
//             count6++;
//         }
//         else if (str[i]==55){
//             count7++;
//         }
//         else if (str[i]==56){
//             count8++;
//         }
//         else if (str[i]==57){
//             count9++;
//         }
//     }
//     printf("\n0 - %d\n",count0);
//     printf("1 - %d\n",count1);
//     printf("2 - %d\n",count2);
//     printf("3 - %d\n",count3);
//     printf("4 - %d\n",count4);
//     printf("5 - %d\n",count5);
//     printf("6 - %d\n",count6);
//     printf("7 - %d\n",count7);
//     printf("8 - %d\n",count8);
//     printf("9 - %d\n",count9);

// }


// int main(){
//     char str[50];
//     int arr[10]={0,0,0,0,0,0,0,0,0,0};
//     int i,j;
//     char ch='0';
//     printf("Input the string with alphanumeric value: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         for(j=0;j<10;j++){
//             if(str[i]==ch){
//                 arr[j]++;
//             }
//             ch++;           
//         }
//         ch='0';
//     }
//     for(i=0;i<10;i++){
//         printf("%d - %d\n",i,arr[i]);
//     }

// }


// WAP to concatenate two string

// int main(){
//   char str1[50],str2[50];
//   int i,j,k,l,m;
//   printf("Enter first string: ");
//   gets(str1);
  
//   printf("\nEnter second string: ");
//   gets(str2);

//   printf("\nString 1= %s",str1);
//   printf("\nString 2= %s",str2);
//   for(i=0;str1[i]!='\0';i++);
//   for(j=0;str2[j]!='\0';j++);
  
//   str1[i]=' ';
//   m=i+1;
//   for(k=m,l=0;k<j,l<j;k++,l++){
//     str1[k]=str2[l];
//   }
//   str1[k]='\0';

//   printf("\nString after concatenation is:%s",str1);
// }

// WAP to reverse the string

// int main(){
//   char str1[50],rev[50];
//   int i,j,k,l,m;
//   printf("Enter string: ");
//   gets(str1);
//   printf("\nString= %s",str1);
//   for(i=0;str1[i]!='\0';i++);
//   m=i-1;
//   for(j=m,k=0;j>=0,k<i;j--,k++){
//     rev[k]=str1[j];
//   }
//   rev[k]='\0';
//   printf("\nReverse string: %s",rev);
// }

// WAP to check wether a string is pallindrome or  not

// int main(){
//   char str[50];
//   int i,j,k,m,p=0;
//   printf("Enter a string: ");
//   gets(str);
//   for(i=0;str[i]!='\0';i++);
//   m=i-1;
  
//   for(j=0,k=m;j<i/2,k>i/2;j++,k--){   
//     if(str[j]!=str[k]){
//       p=1;
//         break;
//     }
    
//   }
//   if(p==0){
//     printf("\nString is pallindrome");
//   }
//   else{
//     printf("\nString is not pallindrome");
//   }
// }


// WAP to fetch the substring of the string as per user given start or end index.

// int main(){
//   char str[50];
//   int start,end,i,j;
//   printf("Enter string: ");
//   gets(str);
//   for(i=0;str[i]!='\0';i++);
//   printf("\nLength of string= %d",i);
//   printf("\nEnter Start index: ");
//   scanf("%d",&start);
//   printf("\nEnter End index: ");
//   scanf("%d",&end);
//   printf("\nThe substring is: ");
//   if((start>i || end>i) || (start>i && end>i) || (start>end)){
//     printf("\nInvalid user input");
//   }
//   else{
//     for(j=start;j<=end;j++){
//       printf("%c",str[j]);
//   }
//   }
// }



// WAP to convert single digit integer into character

// int main(){
//     int num;
//     char ch[10],i;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     ch[0]=num;
//     printf("\n%d",ch[0]);
    
// }




// Write a program in C to compare two strings without using string library functions


// int main(){
//     char str1[50],str2[50];
//     int i,j,k,l,count=0;
//     printf("Enter string1: ");
//     gets(str1);
//     printf("\nEnter string2: ");
//     gets(str2);
//     printf("\nString 1: %s",str1);
//     printf("\nString 2: %s",str2);
//     for(i=0;str1[i]!='\0';i++);
//     for(j=0;str2[j]!='\0';j++);
//     printf("\nLength of str1: %d",i);
//     printf("\nLength of str2: %d",j);
//     if(i==j){
//         for(k=0,l=0;k<i,l<j;k++,l++){
//             if(str1[k]==str2[l]){
//                 count++;
//             }
//         }
//         if(count==i){
//             printf("\nStrings are equal");
//         }
//     }
//     else{
//         printf("\nStrings are not equal");
//     }
// }


// Write a program in C to count total number of alphabets, digits and special characters in a string.

// int main(){
//     char str[50],str2[50],ch;
//     int i,j,k,l,counta=0,countn=0,counts=0,num;
//     printf("Enter string1: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++);
//     for(j=0;j<i;j++){
//         if(str[j]>=65 && str[j]<=122){
//             counta++;
//         }
//         else if(str[j]>=48 && str[j]<=57){
//             countn++;
//         }
//         else {
//             counts++;
//         }
//     }
//     printf("\nNumber of alphabets in the string is: %d",counta);
//     printf("\nNumber of number in the string is: %d",countn);
//     printf("\nNumber of special characters in the string is: %d",counts);
// }






































































































\














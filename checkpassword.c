#include<stdio.h>
#include<string.h>
#include<time.h>
// Write a program to check a password format is valid or not
// a) Password length must be between 6 to 20
// b) Password Must contain atleast one capital letter alphabet
// c) Password must contain atleast on small letter alphabet
// d) Only $ , % ,@ symbols are allowed

int main(){
    char str[50];
    int i,j,c=0,s=0,sp=0,t=0,l=0;
      time_t current_time;
    printf("Enter a password: ");
    gets(str);
    time(&current_time);
    printf("%s", ctime(&current_time));
    for(i=0;str[i]!='\0';i++);
    if(i<6){
        printf("\nYour password is too short");
        t=1;
        return 0;
    }
    else if(i>20){
        printf("\nYour password is too long");
        l=1;
        return 0;
    }
    for(j=0;j<i;j++){
        if(str[j]>=65 && str[j]<=90){
            c=1;
            break;
        }
    }
    if(c==0){
        printf("\nYour password must contain atleast one capital alphabet");
        return 0;
    }
    for(j=0;j<i;j++){
        if(str[j]>=97 && str[j]<=122){
            s=1;
            break;
        }
    }
    if(s==0){
        printf("\nYour password must contain atleat one small letter alphabet");
        return 0;
    }
    for(j=0;j<i;j++){
        if( (str[j]>=32 && str[j]<=35) || (str[j]>=38 && str[j]<=47) || (str[j]<=58 && str[j]>=63) || (str[j]<=91 && str[j]>=96)
         || (str[j]>=123 && str[j]<=127)){
             sp=1;
             break;
         }
    }
    if(t==0 && l==0 && c==1 && s==1 && sp==0){
        printf("\nYour password is correct");
    }
    else if(sp=1){
            printf("\nYour password can only contain dollar($) , percentage or @ character other than this are not allowed");
            return 0; 
    
    }
        time(&current_time);
    printf("%s", ctime(&current_time));
}
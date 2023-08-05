#include<stdio.h>
#include<string.h>
int main(){
    int i,j,a=0,b=0,c=0;
    char email[100],at[5],dot[5];
    printf("Enter email address: "); 
    gets(email);
    for(i=0;email[i]!='\0';i++){
        if(email[i]=='@'){
            a=1;
            at[0]==i;
            break;
        }
    }
    for(j=0;j<i;j++){
        if(email[j]=='.'){
            b=1;
            dot[0]=j;
            break;
        }
    }
    
    if(at[0]<dot[0]){
        c=1;
    }
    if(a==1 && b==1 && c==1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    
}
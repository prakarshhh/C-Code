#include<stdio.h>
#include<string.h>
// 2dString sorting using string function

int main(){
    char str[5][20];
    char temp[50];
    int i,j,num;
    printf("Enter string:\n");
    for(i=0;i<5;i++){
    gets(str[i]);
    }
    printf("\n\nBefore sorting:\n");
    for(i=0;i<5;i++){
    printf("%s\n",str[i]);
    }
    
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(i=0;i<5;i++){
        printf("%s\n",str[i]);
    }
}
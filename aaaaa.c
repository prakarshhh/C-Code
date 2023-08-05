#include <stdio.h>

char disp()
{
    FILE *ptr1;
    char ch;
    ptr1 = fopen("a.txt", "r");
    do
    {
        ch=fgetc(ptr1);
        printf("%c",ch);
    }
    while(ch!=EOF);
    fclose(ptr1);
}

int main()
{
    char str[50];
    char ch;
    FILE *ptr;
    ptr = fopen("a.txt", "w");
    printf("Enter string to be stored in a file: ");
    gets(str);
    fprintf(ptr, "%s", str);
    printf("\nString in a file is: ");
    disp();
}


int main()
{
    FILE *ptr1;
    char ch;
    ptr1 = fopen("a.txt", "r");
    do
    {
        ch=fgetc(ptr1);
        printf("%c",ch);
    }
    while(ch!=EOF);
    fclose(ptr1);
}
#include <stdio.h>
#include <conio.h>

void clrscr(void);
struct employee
{
    int eid;
    char name[50];
    char dept[50];
};

int main()
{
    struct employee s[100];
    struct employee temp;
    FILE *ptr;
    int i, j, choice = 0, count = 0, empid, c = 1;
    while (choice != 5)
    {
        void clrscr();
        printf("\n\n");
        printf("\n1) Add new employee.");
        printf("\n2) Show all employees.");
        printf("\n3) Search by Employee id.");
        printf("\n4) Sort by employee id");
        printf("\n5) Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            count++;
            if (count <= 100)
            {
                printf("\nEnter employee id: ");
                scanf("%d", &s[count].eid);
                printf("\nEnter Name of the employee: ");
                scanf("%s", s[count].name);
                printf("\nEnter Department: ");
                scanf("%s", s[count].dept);
            }
            else
            {
                printf("\nNot enough storage left to store information.");
            }
            printf("\nPress any key to continue........");
            getch();
            break;

        case 2:
            if (count > 0)
            {
                printf("\nEid \t Name\t Department");
                printf("\n----------------------------------------------------");
                for (i = 1; i <= count; i++)
                {

                    printf("\n%d\t%s\t%s", s[i].eid, s[i].name, s[i].dept);
                }
            }
            else
            {
                printf("\nEmployee Not fount");
            }
            printf("\nPress any key to continue........");
            getch();
            break;
        case 3:
            printf("\nEnter the employee id to get detail of that particular employee: ");
            scanf("%d", &empid);
            for (i = 1; i <= count; i++)
            {
                if (empid == s[i].eid)
                {
                    printf("\nEid \t Name\t Department");
                    printf("\n----------------------------------------------------");
                    printf("\n%d\t%s\t%s", s[i].eid, s[i].name, s[i].dept);
                    break;
                }
                else
                {
                    c++;
                }
            }
            if (c == count)
            {
                printf("\nEmploye id you entered does not exist");
            }

            break;
        case 4:
            for (i = 1; i <= count; i++)
            {
                for (j = i + 1; j <= count; j++)
                {
                    if (s[i].eid > s[j].eid)
                    {
                        temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                }
            }
            if (count == 0)
            {
                printf("\nNo record found");
            }
            else
            {
                printf("\nList Sorted");
            }
            printf("\nEnter any key to continue......");
            getch();
        case 5:
            break;
        }
    }
}
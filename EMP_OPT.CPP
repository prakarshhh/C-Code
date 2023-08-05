#include<stdio.h>
#include<conio.h>
#define MAX 100
struct Emp
{
int eid;
char name[20];
char dept[20];
};

void show(struct Emp e[],int index,int count)
{
 int i;
			printf("\nEid \t Name\t Department");
			printf("\n------------------------------------------------");

 if(index<=-1)
 {
			for(i=0;i<count;i++)
			{
				 printf("\n%d\t%s\t%s",e[i].eid,e[i].name,e[i].dept);
			}
 }
 else
 {

//			for(i=0;i<count;i++)
  //			{
				 printf("\n%d\t%s\t%s",e[index].eid,e[index].name,e[index].dept);
//			}
 }
}

main()
{
	struct Emp e[MAX]; // array of employee strucure
	struct Emp temp;
	int choice; // for user choice
	int count=0;// for increment the position
	int i=0,eid,j; // for loops
	char exit='n',name[20],dept[20];


	while(exit!='y')
	{
	clrscr();
	printf("\n1.add new employee");
	printf("\n2.show all");
	printf("\n3.search by eid");

	printf("\n4.sort by eid");

	printf("\n5.exit");
	printf("\nenter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		    if(count<=MAX)
		    {
		    printf("enter eid ,name and department");
		    scanf("%d%s%s",&e[count].eid,&e[count].name,&e[count].dept);
		    count++;
		    }
		    else
		    {
		     printf("no memory ");
		    }
		break;

		case 2:
		if(count>0)
		{
		      show(e,-1,count);
		}
		else
		{
		    printf("\n employee not found");
		}
		printf("\n press any key to continue...........");
		getch();
		break;
		case 3:
		printf("\n enter eid to search");
		scanf("%d",&eid);
		for(i=0;i<count;i++)
		{
		       if(e[i].eid==eid)
		       {

//			 printf("\n%d\t%s\t%s",e[i].eid,e[i].name,e[i].dept);
			show(e,i,count);
			 break;
		       }
		}
		if(i==count)
		{
		  printf("\not found");
		}

		break;
		case 4:
		for(i=0;i<count;i++)
		{
		  for(j=i+1;j<count;j++)
		  {
		     if(e[i].eid>e[j].eid)
		     {
			 temp=e[i];
			 e[i]=e[j];
			 e[j]=temp;
		     }
		  }
		}
		printf("\n list sorted");
		printf("\n press any key to continue...........");
		getch();

		break;
		case 5:
		exit='y';
		break;


	}

	}

}
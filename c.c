#include <stdio.h>
#define str_size 100 //Declare the maximum size of the string
// int test(char* s1, char* s2)
// {
//          int flag = 0;
//          while (*s1 != '\0' || *s2 != '\0') {
//                   if (*s1 == *s2) {
//                             s1++;
//                             s2++;
//                   }
//         else if ((*s1 == '\0' && *s2 != '\0')
//                                      || (*s1 != '\0' && *s2 == '\0')
//                                      || *s1 != *s2) {
//                             flag = 1;
//                             break;
//                   }
//          }
//   return flag;
// }
// int main(void)
// {
// char str1[str_size], str2[str_size];
//    int flg=0;
//    printf("\nInput the 1st string : ");
//    fgets(str1, sizeof str1, stdin);
//    printf("Input the 2nd string : ");
//    fgets(str2, sizeof str2, stdin);          
//    printf("\nString1: %s", str1);
//    printf("String2: %s", str2);
//    flg = test(str1, str2);
//     if(flg == 0)
//    {
//        printf("\nStrings are equal.\n");
//    }
//    else if(flg == 1)
//    {
//       printf("\nStrings are not equal.");
//    }
//          return 0;
// }
#include <stdio.h>

void main()
{
    int arr1[100];
	int arr2[100];
	int arr3[100];
    int n,mm=1,ctr=0;
    int i, j;	
	
	
       printf("\n\nCount total number of duplicate elements in an array:\n");
       printf("---------------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
/*----------------- copy in other array ------------------------------------*/
		for(i=0;i<n; i++)
        {
		arr2[i]=arr1[i];
		arr3[i]=0;
        }
/*------------------- mark the elements are duplicate -------------------------*/
	for(i=0;i<n; i++)
        {
		for(j=0;j<n;j++)
			{
				if(arr1[i]==arr2[j])
				{
				arr3[j]=mm;
				mm++;
				}
			}
			mm=1;
        }		
/*--------------- Prints the array ------------------------------------*/
   for(i=0; i<n; i++)
    {
      if(arr3[i]==2){ctr++;}  
    }
      printf("The total number of duplicate elements found in the array is: %d \n", ctr);
    
	  printf("\n\n");		
}
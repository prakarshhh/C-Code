#include <stdio.h>

// There are N children and Chef wants to give them 1 candy each. Chef already has X candies with him. To buy the rest, he visits a candy shop.
// In the shop, packets containing exactly 4 candies are available.Determine the minimum number of candy packets Chef must buy so that he is
// able to give 1 candy to each of the N children.

// int main()
// {
//     int testcases,x,n,c,i,s=4,k,l,m;
//     scanf("%d",&testcases);
//     for(i=0;i<testcases;i++)
//     {
//         scanf("%d %d",&n,&x);
//         c=n-x;
//         if(x<n)
//         {
//             if(c%4==0)
//             {
//                 k=c/4;
//                 printf("%d\n",k);
//             }
//             else if(c>4)
//             {
//                 l=c/4;
//                 m=l+1;
//                 printf("%d\n",m);
//             }
//             else if(c<4)
//             {
//                 printf("%d\n",c);
//             }
//         }
//         else if(x>=n)
//         {
//             printf("%d\n",0);
//         }
//     }
// }

// End sorted

// int main()
// {
//     int testcases,x,y,i,z,j,l,temp,count=0;
//     scanf("%d",&testcases);
//     for(i=0;i<testcases;i++)
//     {
//         scanf("%d",&l);
//         int p[l];
//         count=0;
//         for(j=0;j<l;j++)
//         {
//             scanf("%d",&p[j]);
//         }
//         if(p[0]==1 && p[l-1]==l)
//         {
//             printf("%d\n",0);
//         }
//         else if(p[0]!=1 && p[l-1]!=l){
//             for(j=0;j<l;j++)
//             {
//                 for(z=j+1;z<l;z++)
//                 {
//                     if(p[j]>p[z])
//                     {
//                         temp=p[j];
//                         p[j]=p[z];
//                         p[z]=temp;
//                         count++;
//                     }
//                 }
//             }
//             printf("%d\n",count);
//         }
//         else if(p[0]==1 && p[l-1]!=l)
//         {
//             for(j=1;j<l;j++)
//             {
//                 for(z=j+1;z<l;z++)
//                 {
//                     if(p[j]>p[z])
//                     {
//                         temp=p[j];
//                         p[j]=p[z];
//                         p[z]=temp;
//                         count++;
//                     }
//                 }
//             }
//         }

//     }
// }



#include <stdio.h>
// Auto storage class

// int storage(int c)
// {
//     int sum;
//     sum=sum+c;
//     return sum;
// }

// int main()
// {
//     int i,a,n,fnc;
//     for(i=1;i<=10;i++)
//     {
//     fnc=storage(i);
//         printf("%d\n",fnc);
//     }
// }

// Static storage class

// int storage(int a)
// {
//     static int sum;
//     sum=sum+a;
//     return sum;

// }

// int main()
// {
//     int n,a,i,fnc;
//     for(i=1;i<=10;i++)
//     {
//         fnc=storage(i);
//         printf("%d\n",fnc);
//     }
// }

// Return multiple values from function
// Print table of a number using function

int &table(int n)
{
    static int arr[10];
    int i;
    for (i = 1; i <= 10; i++)
    {
        arr[i] = i * n;
    }
    return arr;
}

int main()
{
    int i, n = 5, j, fnc, *ptr;
    ptr = table(n);
    for (i = 0; i <= 10; i++)
    {
        printf("%d", ptr[i]);
    }
}

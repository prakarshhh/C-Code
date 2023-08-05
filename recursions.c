#include <stdio.h>
// Find factorial of a number using recursion
// int fact(num){
//     int fc;
//     if(num==1){
//         return 1;
//     }
//     else{
//         fc=num*fact(num-1);
//         return fc;
//     }
// }
// int main(){
//     int num,fncall;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     fncall=fact(num);
//     printf("The factorial of a numeber = %d",fncall);
// }

// WAP to print first 50 natural numbers

// int natnum(int num)
// {
//     if (num < 50)
//     {
//         printf("%d ", num);
//         return natnum(num + 1);
//     }
// }
// int main()
// {
//     int fnc;
//     fnc = natnum(1);
//     printf("%d ", fnc);
// }

// Write a program in C to calculate the sum of numbers from 1 to n using recursion
// #include <stdio.h>

// int sum(int num){
//     if(num>=1){
//         return num + sum(num-1);
//     }
// }

// int main(){
//     int num,fnc;
//     printf("Enter number upto: ");
//     scanf("%d",&num);
//     fnc=sum(num);
//     printf("\nThe sum of numbers from 1 to %d:\n%d ",num,fnc);
// }

// Write a program to print fibonacci series upto n terms

// int fibonacci(int a, int b, int n)
// {
//     int i, sum;
//     sum = a + b;
//     printf("%d ", sum);
//     if (n >= 0)
//     {
//         a = b;
//         b = sum;
//         return fibonacci(a, b, n - 1);
//     }
// }

// int main()
// {
//     int i, fnc, a = 0, b = 1, num;
//     printf("Enter number of terms : ");
//     scanf("%d", &num);
//     printf("%d %d ", a, b);
//     fnc = fibonacci(a, b, num);
// }

// WAP to Calculate power of a number  using recursion

// int n = 1;
// int power(int base, int pow)
// {
//     if (pow > 0)
//     {
//         n = n * base;
//         return power(base, pow - 1);
//     }
//     return n;
// }

// int main()
// {
//     int b, p, fnc;
//     printf("Enter base: ");
//     scanf("%d", &b);
//     printf("Enter power: ");
//     scanf("%d", &p);
//     fnc = power(b, p);
//     printf("\n%d to the power of %d : %d", b, p, fnc);
// }

// Program to count digits in C using recursion

// int count = 0;
// int countn(int num)
// {
//     int q, r;
//     if (num >= 1)
//     {
//         q = num / 10;
//         r = num % 10;
//         count++;
//         return countn(num = q);
//     }
//     return count;
// }

// int main()
// {
//     int num, i, fnc;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     fnc = countn(num);
//     printf("Total digits in number %d is: %d", num, fnc);
// }

// WAP to calculate sum of digits of a number

// int sum = 0;
// int sumd(int num)
// {
//     int q, r;
//     if (num >= 1)
//     {
//         q = num / 10;
//         r = num % 10;
//         sum = sum + r;
//         return sumd(num = q);
//     }
//     return sum;
// }
// int main()
// {
//     int num, fnc;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     fnc = sumd(num);
//     printf("Sum of all digits are: %d", fnc);
// }

// WAP to reverse a number using recursion

// int count = 0, rev = 0;
// int reverse(int num)
// {
//     int q, r;
//     if (num >= 1)
//     {
//         q = num / 10;
//         r = num % 10;
//         rev = (rev * 10) + r;
//         return reverse(num = q);
//     }
//     return rev;
// }

// int main()
// {
//     int num, i, fnc;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     fnc = reverse(num);
//     printf("Reverse number: %d", fnc);
// }

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    if(n==1||n==3||n==5){
	        printf("NO\n");
	    }
	    else{
	        printf("YES\n");
	    }
	}
	return 0;
}


#include <stdio.h>
// Calculate area of rectangle 
/*int main(){
    int l,b,a;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);
    a=l*b;
    printf ("Area of rectangle is %d" , a);
}
*/




//Calculate area of circle 
/*main(){
	float r,a;
	printf("Enter radius : ");
	scanf("%f",&r);
	a=3.14*(r*r);
	printf("Area of circle is %f ",a);


}
*/



// Write a program to input any two number and find the biggest number
/*
main(){
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	c=(a>b)?a:b;	
	printf("Biggest number is %d",c);

}*/



// Write a program to input any two digit number and seperate the digits.

/*main(){
	int a,b,c;
	printf("Enter two digit number: ");
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	printf("%d\n",b);
	printf("%d",c);


}

*/


//Write a program to input any two digit number and calculate the sum of the digits

/*main(){
	int a,b,c,d;
	printf("Enter a two digit number : ");
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	d=b+c;
	printf("Sum of %d and %d = %d",b,c,d);


}
*/




//Write a program to input any two digit number and find the biggest number.

/*main(){
	int a,b,c,d;
	printf("Enter any two digit number: ");
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	d=(b>c)?b:c;
	printf("Biggest is %d ",d);


}


*/


//Write a program to input any two digit number and print reverse of the number 

/*main(){
	int a,b,c,d;
	printf("Enter any two digit number: ");
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	printf("%d%d",b,c);

}
*/



// Write a program to input time in minutes and convert into hours and minutes.


/*main(){
	int a,b,c,d;
	printf("Enter time in min ");
	scanf("%d ",&a);
	b=a/60;
	c=a%60;
	printf("%d Hours %d Min. ",b,c);

*/

//Swap the numbers
# include <stdio.h>
/*main(){
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	c=a;
	a=b;	
	b=c;
	printf("After swapping a = %d\n",a);
	printf("After swapping b = %d",b);


}*/



//Check weather a given number is even or odd
/*main(){
	int a,b;
	printf("Enter a number: ");
	scanf("%d",&a);
	b=a%2;
	if (b==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}*/




// Check wether a given character is vowel or not 
/*int main(){
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	if (c=='a' || c=='e' || c=='i' || c=='o'|| c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		printf("It's a vowel ");
	}
	else{
		printf("Not a vowel");
	}

}*/

// Check whether a given character is alphabet or not

/* int main(){
	char c;
	int n;
	printf("Enter a character: ");
	scanf("%c",&c);

	if ((c>='a' && c<='z')||(c>'A' && c<='Z')){
		printf("It's a character ");
	}
	else{
		printf("Not a character");
	}

}
*/

// Check whether a given character is upper case or not 

int main(){
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	if (c>=65 && c<=90){
		printf("Upper case");
	}
	else{
		printf("Lower case");
	}
}
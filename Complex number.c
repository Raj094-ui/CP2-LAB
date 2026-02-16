//Write a program to define a structure for a complex number (real and imaginary parts) and write a function to perform addition of two complex numbers. 
#include<stdio.h>
#include<string.h>
struct complex
{
	int n;
	int i;
}
main(){
	struct complex c1={1,2};
	struct complex c2,c3;
	printf("Enter complex number");
	scanf("%d %d",&c2.n,&c2.i);
	
	c3.n=c1.n+c2.n;
	c3.i=c1.i+c2.i;
	printf("%d+%di",c3.n,c3.i);
}    

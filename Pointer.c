//Write a program to create a pointer to an integer variable and demonstrate how the pointer can modify the value of the variable.
#include<stdio.h>
main()
{
	int a=10;
	printf("Original value of the a:%d\n",10);
	int*p;
	p=&a;
	*p=25;
	printf("The modified number of a is:%d\n",25);
	return 0;
}

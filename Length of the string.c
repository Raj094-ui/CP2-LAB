// Write a program to calculate the length of a string using pointers.
#include<stdio.h>
#include<string.h>
 main()
{
	char str[10];
	char *p;
	int length=0;
	printf("Enter a string");
	gets(str);
	p=str;
	while(*p!='\0')
	{
	length++;
	p++;	
	}
	printf("Length of the string is=%d",length);
	return 0;
}

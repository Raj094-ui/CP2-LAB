//Create a program to input a string and display each character on a new line.
#include<stdio.h>
#include<string.h>
main(){
	char a[20],i;
	printf("Enter a string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	printf("%c\n",a[i]);
}
	return 0;
}


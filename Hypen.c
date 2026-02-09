//Write a program to replace spaces in a string with hyphens.
#include<stdio.h>
#include<string.h>
main(){
	int i;
	char a[20];
	printf("Enter a string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]==' ')
	a[i]='-';
}
printf("%s",a);
}

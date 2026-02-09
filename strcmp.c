//Write a program to compare two strings using strcmp. 
#include<stdio.h>
#include<string.h>
int main(){
	int result;
	char a[20],b[20];
	printf("Enter a string");
	gets(a);
	printf("Enter another string");
	gets(b);
	strcmp(a,b);
	if(result==strcmp(a,b))
	printf("Both are equal");
	else
	printf("Both are not equal");
}

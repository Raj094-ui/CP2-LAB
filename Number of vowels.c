// Implement a function to count the number of vowels in a string using pointers. 
#include<stdio.h>
#include<string.h>
int countvowels(char *str)
{
	int counter=0;
	while(*str)
	{
		if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||str=='U')
		{
			counter ++;
		}
		str++;
	}
	return counter;
}
int main()
{
	char str[20];
	printf("Enter a string");
	gets(str);
	printf("Number of Vowels=%d",countvowels(str));
	return 0;
}

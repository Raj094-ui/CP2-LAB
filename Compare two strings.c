//Implement a function to compare two strings using pointers.
#include<stdio.h>
#include<string.h>
int compare(char*s1,char*s2)
{
	if strcmp(*s1&&*s2)
	{
		if(*s1!=*s2)
		s1++;
		s2++;
	}
	return(*s1=='\0'&&*s2=='\0');
    else
     return 0;
	  	} 
	
	int main()
	{
		char s1[20],s2[20];
		printf("Enter first string=");
		gets(s1);
		printf("Enter second string=");
		gets(s2);
		if(compare(s1,s2))
		printf("Strings are equal");
		else
		printf("Strings are not equal");
}

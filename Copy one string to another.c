//Write a program to copy one string to another using pointer.
#include<string.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	char *p1,*p2;
	printf("Enter a string");
	gets(str1);
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		*p2=*p1;
		 p1++;
		 p2++;
	}
	*p2='\0';
	printf("Copied string=%s",str2);
	}

//Develop a program to concatenate two strings using strcat.
#include<stdio.h>
#include<string.h>
main(){
char a[20],b[20];
printf("Enter a string");
gets(a);
printf("Enter another string");
gets(b);
strcat(a,b);
printf("%s",a);
printf("%s",b);
}

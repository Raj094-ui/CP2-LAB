//WAP to print your name and SIC number.
#include<stdio.h>
#include<string.h>
main(){
char name[25];
char SICnum[10];
printf("Enter your name");
gets(name);
printf("Enter your SIC number");
scanf("%s",SICnum);
printf("Name =%s \n SIC=%s",name,SICnum);
}

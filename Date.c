//How can you define a structure to store a date (day, month, year) and display it in the format DD/MM/YYYY.
#include<stdio.h>
#include<string.h>
struct date
{
	int DD;
	int MM;
	int YYYY;
}
main(){
struct date d1={16,02,2026};
struct date d2;
printf("Enter the date");
scanf("%d %d %d",&d2.DD,&d2.MM,&d2.YYYY);
printf("The date is %d %d %d",&d2.DD,&d2.MM,&d2.YYYY);
}

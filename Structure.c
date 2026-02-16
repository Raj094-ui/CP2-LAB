//Write a program to define a structure for a student containing fields for name, roll number, and marks. Input and display the details.
#include<stdio.h>
#include<string.h>
struct student 
{
	char Name[50];
	char SIC[20];
	int Rollnumber;
	float SGPA;
}
main()
{
	struct student s1={"ABC","25mimd23",10,8.9};
	struct student s2;
printf("Enter student details");
scanf("%s %s %d %f",&s2.Name,&s2.SIC[20],&s2.Rollnumber,&s2.SGPA);
}



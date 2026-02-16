//Create a nested structure to store a student’s details (name, roll number,and address where address is another structure). 
#include<stdio.h>
#include<string.h>
struct student 
{
	struct address
	{
		char city[20];
		char dist[20];
		char state[20];
		int pin;
	}
	struct address add;
	char Name[50];
	char SIC[20];
	int Rollnumber;
	float SGPA;
}
main()
{
	struct student s1={"rama","25mimd07",10,9.5};
	struct address add1={"bbsr","khordha","odisha",751024};
	struct student s2;
	struct address add2;
printf("Enter student details");
scanf("%s %s %d %f",&s2.add2.city,&s2.add2.dist,&s2.add2.state,&s2.add2.pin);
printf("The details are 
}

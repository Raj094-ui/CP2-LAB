//Demonstrate: How do you declare a bit-field to store a value that ranges from 0 to 15?
#include<stdio.h> 
struct numbers
{   
	unsigned int num:4;
} 
main(){
	struct numbers n1;
	n1.num=0;
	struct numbers n2;
	n2.num=15;
	struct numbers n3;
	n3.num=16;

	printf("%u %u %u",n1.num,n2.num,n3.num);
	};



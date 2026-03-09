//Write a program demonstrating pointer arithmetic with a double array.Show how to iterate through the array using a pointer.
#include<stdio.h>
main(){
	
	double arr[]={1.1,2.6,3,4};
    double *p=arr;
	int i;
	for(i=0;i<4;i++)
	printf("\n%ld",*(p+i));
}

//Explain how you can use a pointer to access and print elements of an integer array.
#include<stdio.h>
 main()
{
	int arr[]={1,2,3,4};
    int *p=arr;
	int i;
	for(i=0;i<4;i++)
	*(p+i)=*(p+i)*10;
	for(i=0;i<4;i++)
	printf("\n%d",*(p+i));
}


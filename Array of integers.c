//Write a program to input an array of integers and print them using pointers.
#include <stdio.h>

int main() 
{
    int arr[10],i;
    int *p =arr;

    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++) 
	{
        scanf("%d", (p + i));
    }

    printf("Array elements are:\n");
    for(i=0;i<10;i++) 
	{
        printf("%d ",*(p + i));
    }
}

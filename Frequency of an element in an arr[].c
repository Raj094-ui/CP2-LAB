//Write a program to find the frequency of a given element in an array using pointers.
#include <stdio.h>

int main() 
   {
    int arr[10],i,num,count = 0;
    int *p =arr;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
    scanf("%d",(p + i));

    printf("Enter element to find frequency:");
    scanf("%d",&num);

    for(i=0;i<10;i++) 
	{
        if(*(p + i)==num)
            count++;
    }

    printf("Frequency of %d =%d",num,count);
}

//Write a program to reverse the elements of an array in-place using pointers.#include <stdio.h>

int main() 
{
    int arr[5],i,temp;
    int *start,*end;

    printf("Enter 5 elements:\n");
    for(i = 0;i<5;i++)
    scanf("%d", &arr[i]);

    start =arr;
    end =arr+4;

    while(start < end) 
	{
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

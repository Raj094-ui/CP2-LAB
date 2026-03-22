//Write a program to count the number of even and odd elements in an array using pointers.
#include <stdio.h>

int main()
 {
    int arr[10],i,even=0,odd=0;
    int *p=arr;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++)
        scanf("%d",(p + i));

    for(i=0;i<10;i++)
	 {
        if(*(p + i)%2==0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n",even);
    printf("Odd numbers = %d\n",odd);
}
 

//Implement a function to calculate the sum of all elements in an array using pointers. 
#include <stdio.h>

int sumArray(int *p, int n) 
{
    int sum = 0;
    int i;
    for(i=0;i<n;i++)
    sum +=*(p + i);

    return sum;
}

int main() 
{
    int arr[5];
    int i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);

    printf("Sum = %d",sumArray(arr, 5));
}

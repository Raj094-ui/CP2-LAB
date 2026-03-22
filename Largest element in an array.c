//Implement a function to find the largest element in an array using pointers.
#include <stdio.h>

int largest(int *p,int n) 
{
    int max =*p;
    for(int i=1;i<n;i++) 
    {
     if(*(p + i)>max)
     max =*(p + i);
    }

    return max;
}

int main()
 {
    int arr[5];
    printf("Enter 5 elements:\n");
    

    printf("Largest element = %d",largest(arr, 5));
}

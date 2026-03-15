#include <stdio.h>

int main()
   {
    double arr[5] = {1.2, 2.4, 3.6, 4.8, 6.0};
    double *ptr;
    ptr = arr;  
    printf("Elements of the array using pointer arithmetic:\n");
    int i;
    for(i = 0;i < 5;i++)
	{
    printf("%.2lf ", *(ptr + i));
    }

    return 0;
}

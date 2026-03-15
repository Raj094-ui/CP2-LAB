#include <stdio.h>

int main() 
   {
    long num=1000;
    long *ptr;

    ptr=&num;

    printf("Original value = %ld\n",num);

    *ptr=5000;   

    printf("Modified value = %ld\n",num);

    return 0;
}

//Write a program to create a structure named Complex and define a function incrComplex() to increment the value of both real and imaginary members by 1.
#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

void incrComplex(struct Complex *c) 
{
    c->real += 1;
    c->imag += 1;
}

int main()
 {
    struct Complex c1;

    printf("Enter real and imaginary part:");
    scanf("%d %d", &c1.real, &c1.imag);

    incrComplex(&c1);

    printf("After increment:\n");
    printf("Real = %d, Imaginary = %d\n", c1.real, c1.imag);

} 


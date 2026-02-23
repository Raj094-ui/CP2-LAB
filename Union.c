// Can a union contain a bit-field? Demonstrate with an example.
#include<stdio.h>
union test
{ 
int a;
double b;
};
main()
{
	union test t1;
	t1.a=10;
	t1.b=10.45;
	printf("%d %f",t1.a,t1.b);
}

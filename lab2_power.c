//WAP to represnt two numbers in exponential format.
#include<stdio.h>
#include<math.h>
int power(int x,int y)
{
	if (y==0)
		return 1;
	else
		return x*power(x,y-1);
}
void main(){
	int p=power(2,3);
	printf("The result is %d",p);
}


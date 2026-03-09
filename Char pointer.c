//Create a program to illustrate the use of pointers with character variables.c Include both reading and printing the character via the pointer. 
 main()
{
	char a='b';
    char*p;
	p=&a;
	*p='b';
	printf("The value is %c\n",'b');
}


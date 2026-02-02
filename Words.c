//WAP to print the number of words in a sentence.
#include<stdio.h>
#include<string.h>
main(){
	char s[20];
	int i,count=0;
	puts("sentence\n");
	gets(s); 
	for(i=0;s[i]!=0;i++){
	
	if(s[i]==' ')
	{
	
	count++;
}
}
printf("%d",count+1);
}

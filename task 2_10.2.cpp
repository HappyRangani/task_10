#include<stdio.h>

void size(char name[])
{
	int i,count = 0;
	for(i=0;name[i]!=NULL;i++)
	{
		count++;
	}
	printf("Length of a string is = %d",count);
}

main()
{
	char name[100];
	
	int i;
	printf("ENTER ANY STRING :-");
	gets(name);
	
	size(name);
	
}
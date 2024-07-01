#include<stdio.h>

int divisibility(int n)
{
	
	if(n%3==0&& n%5==0)
	{
		printf("The given number is  divisible by both 3 and 5");
	}
	else
	{
		printf("The given number is not divisible by both 3 and 5");
	}
}

main()
{
	int n;
	printf("Enter any number = ");
	scanf("%d",&n);
	
	divisibility(n);
}
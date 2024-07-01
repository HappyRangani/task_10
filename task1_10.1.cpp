#include<stdio.h>

int CUBE(int n)
{
	int cube;
	cube = n * n * n;
	printf("The cube of %d = %d",n,cube);
}

main()
{
    int n;
	printf("Enter any Number = ");
	scanf("%d",&n);	
	
	CUBE(n);
}
	

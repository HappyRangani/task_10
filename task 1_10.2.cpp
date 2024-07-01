#include<stdio.h>
void sum(int a[],int n)
{
	int ans=0,i;
	for(i=0;i<n;i++)
	{
		ans = ans + a[i];
	}
	printf("Sum of all the elements are = %d",ans);
}
main()
{
	int n,i;
	printf("Enter array size = ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("ENTER ARRAY ELEMENTS:- ");
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	sum(a,n);
}
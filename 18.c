// Find factorial of a number entered by the user 
#include<stdio.h>
int main()
{
	int i,n,factorial;
	factorial=1;
	printf("enter the number of elements in the series: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("factorial of element is %d",factorial);
	return 0;
}

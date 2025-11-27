// Find product of series:  1 2 3 4 5 .... n
#include<stdio.h>
int main()
{
	int n,i,product;
	printf("Enter the number of items: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		product=product*i;
		
	}
	printf("the product is %d",product);
return 0;	
}

//Display the series (using loops):  n   n-1   n-2 …. 3   2   1
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the length of series: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	printf(" %d ",i);
}

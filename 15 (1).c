// Display all even numbers from 1 to 100 [using loop and if]
#include<stdio.h>
int main()
{
	int i;
	i=2;
	while(i<101)
	{
		printf(" %d ",i);
		if(i<101)
		{
		i=i+2;
		}
		else
		{
			break;
		}
	}
}

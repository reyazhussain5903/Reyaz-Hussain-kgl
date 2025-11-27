// Add and subtract two integers using functions (a+b, a-b, b-a).
#include <stdio.h>
int main( ) 
{
	int a, b,c;
	printf( " Enter two numbers: " );
	scanf( "%d %d", &a, &b );
	c=add( a,b );
	printf("result = %d",c);
}
int add( int a, int b ) 
{
	int c,i;
	printf("1 for add & 2 for subtract 3 for reverse subtraction");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			c=a+b;
			break;
		case 2:
		    c=a-b;
		    break;
		case 3:
			c=b-a;
			break;
		default:
			printf("incorrect option");
			break;	
	}
	
	return c;
}


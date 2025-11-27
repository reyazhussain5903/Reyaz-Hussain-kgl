//Display contents of an integer array in reverse order.//
#include <stdio.h>
int main() 
{
	int a[100], i, n;
	
	printf( "Enter no. of elements to store in the array: " );
	scanf( "%d", &n );
	
	printf( "Enter elements to store in the array:\n" );
	for ( i = 0; i <= n - 1; i++ ) {
		scanf( "%d", &a[ i ] );
	}
	
	printf( "The array contains: " );
	for ( i=n-1; i >= 0; i-- ) {
		printf( "%d ", a[ i ] );
	}
	
	return 0;
}

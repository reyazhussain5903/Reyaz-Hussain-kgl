//Find product of two matrices.//

#include <stdio.h>

int main() {
	int a[ 100 ][ 100 ], b[ 100 ][ 100 ], m, i, j; 
	
	printf( "Enter rank of matrix as 'm' (a square matrix, m x m): ");
	scanf( "%d", &m );
	printf( "Enter elements of matrix 1 row-wise:\n" );
	for ( i = 0; i < m; i++ ) 
	{
		for ( j = 0; j < m; j++ ) 
		{
			scanf( "%d", &a[ i ][ j ] );
		}
	}	
	printf( "Enter elements of matrix 2 row-wise:\n" );
	for ( i = 0; i < m; i++ ) 
	{
		for ( j = 0; j < m; j++ ) 
		{
			scanf( "%d", &b[ i ][ j ] );
		}
	}
	
	printf( "product:\n" );
	for ( i = 0; i < m; i++ ) 
	{
		for ( j = 0; j < m; j++ ) 
		{
			printf( "%d ", a[ i ][ j ] * b[ j ][ i ] );
		}
		printf( "\n" );
	}
	
	
	return 0;
}



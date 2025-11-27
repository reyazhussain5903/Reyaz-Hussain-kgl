/*Input a string from the user and display the same.*/
#include <stdio.h>
#define N 100

int main() 
{
	int i;
	char a[ 100 ];
	printf( "Enter string: " );
	scanf( "%s",&a );
	printf( "Entered string is: " );
	for ( i = 0; a[ i ] != '\0'; i++ ) {
		printf( "%c", a[ i ] );
	}
	return 0;
}


//Input a string from the user and find its length (without using the string library).//
#include <stdio.h>
int main() 
{
	int i;
	char a[100];
	printf( "Enter string: " );
	scanf( "%s",&a );
	for ( i = 0; a[ i ] != '\0'; i++ ) 
	{
	}
	printf( "%d", i );

	return 0;
}


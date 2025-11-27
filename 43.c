//Input a string from the user and display it in reverse order.//
#include <stdio.h>
int main() {
	char a[100];
	int i,n;
	printf( "Enter string: " );
	scanf( "%s",&a );
	for ( i = 0; a[ i ] != '\0'; i++ ) 
	{
	}
	n=i;	
	for ( i=n-1; i >= 0; i-- ) 
	{
		printf( "%c", a[ i ] );
	}

	return 0;
}


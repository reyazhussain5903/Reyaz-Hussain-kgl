/*Display the following pattern (using loops):
	*****
	***
	**
	*
*/
#include <stdio.h>

int main()
 {
	int i, j,a[]={5,3,2,1};
	
	for( i = 0; i <= 4; i++ )
	 {
		for ( j = 0; j <a[i]; j++ ) 
		{
			printf( "*" );
		}
		printf( "\n" );
	}

	return 0;
}


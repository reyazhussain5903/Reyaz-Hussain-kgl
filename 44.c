 // Check whether a string is palindrome or not
#include <stdio.h>
int main() 
{
	int i,j,n,flag=1;
	char a[100];
	printf( "Enter string: " );
	scanf( "%s",&a );
	for ( i = 0; a[ i ] != '\0'; i++ ) 
	{
	}
	n=i;
	i=0;
	j=n-1;
	while(i<j)
	{
		if(a[i]!=a[j])
		{
			printf("It is not a palendrome");
			i++;
			j--;
		}
		if(flag==0)
		printf("It is a palendrome");
	}
}

// Check whether a number is prime or not 
#include<stdio.h>
int main()
{
	int i,num;
	int flag=0;
	printf("enter the number");
	scanf("%d",&num);
	  for(int i=2;i<=num/2;i++)

    {

        if(num%i==0)

        {

            flag=1;

            break;

        }

    }

    if(flag==1) 

        printf("%d is not a prime number", num);

    else

        printf("%d is a prime number", num);
	
}

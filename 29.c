// Check whether a number is Armstrong number or not 
#include<stdio.h>
#include<math.h>
int main() 
{
 int c=0,b,a=0,r=0,n;
 printf(" Please,Enter a number : "); 
 scanf("%d",&n);
 b=n; 
 while(n!=0)
 {
  n=n/10;
  ++c;
 }
 n=b;
 while(n!=0)
 {
  r=n%10;
  a=a+pow(r,c);
  n=n/10;
 }
 if(b==a)
  printf("\n %d is a Armstrong number.",b);
 else
  printf("\n %d is not a Armstrong number.",b);
 return 0;
} 


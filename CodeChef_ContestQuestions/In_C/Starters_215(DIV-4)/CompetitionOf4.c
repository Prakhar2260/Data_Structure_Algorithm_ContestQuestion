#include <stdio.h>

int main() 
{
	// your code goes here
 int X;
 scanf("%d",&X);
 
 int pow=4-X;
 
 int mul=1;
 
 for(int i=1;i<=pow;i++)
  {
   mul=mul*2;      
  }
  
  printf("%d",1000*mul);
  
  return 0;
}


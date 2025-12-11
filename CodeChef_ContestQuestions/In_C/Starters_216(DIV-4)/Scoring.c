#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int X,Y;
	  scanf("%d %d",&X,&Y);
	  
	  printf("%d %d\n",(Y+X)/2,(Y-X)/2);
	}
	
	return 0;

}


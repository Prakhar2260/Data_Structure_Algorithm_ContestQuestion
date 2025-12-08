#include <stdio.h>

int main() {
	// your code goes here
	
	int X,Y;
	
	scanf("%d %d",&X,&Y);
	
	int dist=X*Y;
	
	if(dist>=100)
	printf("Yes\n");
	
	else
	printf("No\n");
	
	return 0;

}


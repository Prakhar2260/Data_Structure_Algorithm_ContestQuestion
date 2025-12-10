#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int r,b,g;
	  scanf("%d %d %d",&r,&b,&g);
	  
	  int money=0;
	  int i,j,k;
	  for(i=r,j=b,k=g; i!=0 && j!=0 && k!=0 ; i--,k--,j--)
	   {
	     money=money+10;     
	   }
	   
	   money=money+i*3+j*3+k*3;
	   
	   printf("%d\n",money);
	}
	
	return 0;

}


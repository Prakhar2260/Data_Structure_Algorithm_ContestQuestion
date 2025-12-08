#include <stdio.h>

int main() {
	// your code goes here

    int T;
    scanf("%d",&T);
    
    while(T--)
    {
      int N;
      scanf("%d",&N);
      
      char ar[N+1];
        scanf("%s",ar);

        
     int safe=0;
        for (int i=0;i<N;i++)
        {
            if (ar[i] == '0') 
            safe++;
            else break;         
        }
      
      
        
      printf("%d\n",safe);        
    }
    
    return 0;
}


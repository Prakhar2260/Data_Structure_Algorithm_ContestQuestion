#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    
	  int seats[N+1];
	  
	  for(int i=0;i<N+1;i++)
	   {
	     scanf("%d",&seats[i]);    
	   }
	   
	   int Loudness=100000; 

        for (int i =0;i<N;i++) 
        {
            int currentLoudness;

            if (seats[i]>seats[i+ 1])
                currentLoudness=seats[i];
                
            else
                currentLoudness=seats[i+1];

            if (currentLoudness<Loudness)
                Loudness = currentLoudness;
        }

        printf("%d\n",Loudness);
	}
	
	return 0;

}


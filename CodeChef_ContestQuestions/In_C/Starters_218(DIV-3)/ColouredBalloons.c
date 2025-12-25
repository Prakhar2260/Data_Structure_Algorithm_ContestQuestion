#include <stdio.h>

int main() 
{
	// your code goes here
	
    int T;
    scanf("%d",&T);


    while (T--)
    {
        int N;
        scanf("%d",&N);

        int ar[N];
        
        for (int i = 0;i<N;i++)
        {
            scanf("%d",&ar[i]);
        }

        int Cost=0;
        for (int i =0;i<N;i++)
        {
            Cost = Cost +((i+1)*ar[i]);
        }

        printf("%d\n",Cost);
        
    }


}


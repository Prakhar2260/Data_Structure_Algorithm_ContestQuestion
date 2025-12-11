#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int N;
        scanf("%d",&N);

        int ar[N];
        for (int i = 0; i < N; i++) 
        {
            scanf("%d",&ar[i]);
        }


        int min =ar[0]+ar[1];
        
        for(int i=1;i<N-1;i++)
        {
            int cost=ar[i]+ar[i+1];
            if (cost< min) 
            {
                min =cost;
            }
        }
        

        printf("%d\n",min);
    }

    return 0;
}

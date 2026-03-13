#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
    scanf("%d",&T);

    while(T--)
    {
        int n;
        scanf("%d",&n);

        int Array[n];
        for(int i=0;i<n;i++)
            scanf("%d",&Array[i]);

        int t=0;

        for(int i=0;i<n;i++)
        {
            int hits;

            if(t<Array[i])
            {
                hits=t;
            }        
                
            else
            {
                hits=Array[i];
            }        

            if(hits<Array[i])
                t++;
                
            printf("%d ",hits);        
        }

        printf("\n");
    }

    return 0;


}

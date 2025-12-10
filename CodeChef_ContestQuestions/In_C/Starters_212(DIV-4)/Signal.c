#include <stdio.h>

int main() 
{
    int T;
    scanf("%d",&T);

    while(T--) 
    {
        int N;
        scanf("%d",&N);

        char S[N+1];
        scanf("%s",S);

        int zeroappeared=0;  
        int count=0;     

        for (int i = 0; i < N; i++)
        {
            if (S[i]=='0')
            {
                zeroappeared=1;  
            }
            
            else if(S[i]=='1'&& zeroappeared !=0)
            {
                count++;    
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

#include <stdio.h>

int main() 
{
    int T;
    scanf("%d",&T);

    while (T--) 
    {
        int N,C;
        scanf("%d %d",&N,&C);

        int A[N];
        for (int i =0;i<N;i++)
            scanf("%d",&A[i]);

        char S[N +1];
        scanf("%s",S);

        int Nsum = 0, Ssum = 0;

        for (int i =0;i<N;i++)
        {
            if(S[i]=='0')
                Nsum=Nsum+A[i];
            else
                Ssum=Ssum+A[i];
        }

        int result=Nsum;

        if (Nsum >= C && Ssum > C)
            result=Nsum +Ssum - C;

        printf("%d\n",result);
    }

    return 0;
}

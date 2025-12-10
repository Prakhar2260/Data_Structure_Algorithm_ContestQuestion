#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d",&N);
        
        char S[N+1];
        scanf("%s",S);

        int cnt00=0,cnt11=0;
        
        for(int i=1;i<N;i++)
        {
            if(S[i-1]=='0' && S[i]=='0')
            cnt00++;
            
            else if(S[i-1]=='1' && S[i]=='1')
            cnt11++;
        }

        int diff=cnt00-cnt11;
        
        if(diff<=0) {
            printf("0\n");
        } 
        
        else
        {
            printf("%d\n",(diff+1)/2);
        }
    }
    
    return 0;
}

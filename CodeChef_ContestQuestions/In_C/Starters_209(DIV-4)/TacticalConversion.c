#include <stdio.h>
#include <string.h>

int main() 
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int N;
        scanf("%d",&N);

        char Str[N+1];
        scanf("%s",Str);

        int i=0,block=0,single=0;
        
        

        while(i<N)
        {
            if(Str[i]=='1')
            {
                int start=i;
                
                while(i<N && Str[i]=='1')
                i++;
                int len=i-start;
                block++;
                
                single=len;
            } 
            
            else
            {
                i++;
            }
        }

    
        if(block==1 && (single==2||single==3))
        {
            printf("NO\n");
            
        }
        
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d",&T);

    while (T--) 
    {
        int N;
        char S[105];
        

        scanf("%d",&N);
        
        scanf("%s",S);
        
        int freq1[26]={0};

        for (int i = 0; i < N; i++) 
        {
            freq1[S[i]-'a']++;
        }

        int c=0;
        for (int i= 0; i < 26; i++)
        {
            if (freq1[i]>= 2)
            {
                c= 1;
                break;
            }
        }

        if (c==1)
            printf("Yes\n");
            
        else
            printf("No\n");
    }

    return 0;
}

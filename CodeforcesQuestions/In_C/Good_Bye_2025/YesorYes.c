#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while (T--) 
    {
        char strr[105];
        scanf("%s",strr);

        int Y=0;

        for (int i=0;strr[i]!='\0'; i++)
        {
            if(strr[i]== 'Y')
            {
                Y++;
            }
        }

    
        if (Y<= 1)
            printf("YES\n");
            
        else
            printf("NO\n");
    }

    return 0;
}

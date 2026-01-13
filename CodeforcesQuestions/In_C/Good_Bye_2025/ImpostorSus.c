#include <stdio.h>
#include <string.h>

int main() 
{
    int T;
    scanf("%d",&T);

    while (T--)
    {
        char rs[200005];
        scanf("%s",rs);

        int ops=0;
        int n=strlen(rs);
        if (rs[0]== 'u')
        {
            rs[0]= 's';
            ops++;
        }

        if (rs[n-1]=='u')
        {
            rs[n-1]='s';
            ops++;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if(rs[i] == 'u')
            {

                if(rs[i+1]=='u')
                {
                    rs[i+1]='s';
                    ops++;
                }
            }
        }

        printf("%d\n",ops);
    }

    return 0;
}

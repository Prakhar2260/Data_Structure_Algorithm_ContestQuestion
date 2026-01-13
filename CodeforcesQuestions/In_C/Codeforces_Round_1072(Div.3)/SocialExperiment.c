#include <stdio.h>

int main()
 {
    int T;
    scanf("%d",&T);

    while (T--)
     {
        int N;
        scanf("%d",&N);

        if(N==2) 
        {
        printf("2\n");
        }

        else if(N==3)
         printf("3\n");

        else 
        printf("%d\n",N%2);
    }

    return 0;
}

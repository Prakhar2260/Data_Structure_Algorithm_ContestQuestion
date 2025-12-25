#include <stdio.h>

int main()
{
	// your code goes here
	
    int T;
    scanf("%d",&T);

     while(T--) 
    {
        int N;
        scanf("%d",&N);

        char votes[105];
        scanf("%s",votes);

        int VoteForChef=0;
        int possibilities=0;


        for(int i=1;i<=N;i++)
          {
              
            if(votes[i-1]=='1')
            VoteForChef++;

            if(2*VoteForChef>i)
                possibilities++;
        }

        printf("%d\n",possibilities);
     }

   return 0;
   
}


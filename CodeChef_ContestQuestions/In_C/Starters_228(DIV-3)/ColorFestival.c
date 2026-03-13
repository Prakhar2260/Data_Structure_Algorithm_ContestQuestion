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
        
        int array[n];
        for(int i=0;i<n;i++)
          scanf("%d",&array[i]);

        int freq[101]={0};
        int count=0;
        
        for(int i=0;i<n;i++)
         {
             freq[array[i]]++;
         }

        for(int i=0;i<101;i++)
         {
            if(freq[i]!=0)
            {
                count++;
            }
        }

        printf("%d\n",count);
    }

    return 0;

}

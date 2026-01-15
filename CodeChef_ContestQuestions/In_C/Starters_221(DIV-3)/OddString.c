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
	   
	   char sr[N+1];
	   scanf("%s",&sr);
	   
	   int freq[26]={0};

        for (int i=0;i<N;i++)
        {
            freq[sr[i]-'a']++;
        }


        int c=0;
        
        for(int i=0;i<26;i++)
        {
            if(freq[i]<=2)
            {
                c=1;
                continue;
                
            }
            
            else
            {
                c=0;
                break;
            }
        }
        
	    if(c==0)
	    printf("NO\n");
	    
	    else
	    printf("YES\n");
	    
	}
	
	return 0;

}


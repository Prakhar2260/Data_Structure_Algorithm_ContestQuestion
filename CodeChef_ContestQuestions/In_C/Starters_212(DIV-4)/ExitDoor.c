#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  
	  int ar[N];
	  
	  for(int i=0;i<N;i++)
	   scanf("%d",&ar[i]);
	  
	  int count=0;

        for(int x=N;x>=1;x--)
        { 
            int pos=-1;
            
            for (int i=0;i<N;i++) 
            {
                if(ar[i]==x)
                {
                    pos=i;
                    break;
                }
            }

            int left=0;
            int right=0;
            
            for(int i=0;i<pos;i++)
            {
                if (ar[i]!=0)
                  {
                    left++;
                  }    
            }          
                    
            for (int i=pos+1;i<N;i++)
            {
                if(ar[i]!=0)
                {
                  right++;
                }  
            }        

            count=count+(left<right?left:right);

            ar[pos]=0;
        }
        
        printf("%d\n",count);
	}    
	
	return 0;

}


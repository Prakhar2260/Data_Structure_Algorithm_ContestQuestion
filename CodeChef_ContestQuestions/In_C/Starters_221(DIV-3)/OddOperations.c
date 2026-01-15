#include <stdio.h>


int maxDigit(int num)
{
    int max=0;
    
    while(num>0)
    {
        int rem=num%10;
        
        if (rem>max)
            max=rem;
            
        num=num/10;
    }
    return max;
}


int HaveOdd(int n)
{
    while(n>0)
    {
        int rem=n%10;
        
        if(rem%2==1)
            return 1;
            
        n=n/10;
    }
    
    return 0;
}



int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  
	  int operation=0;
	  int c=0;
	  
	  if(N%2==0 && N<=9)
	  {
	    printf("-1\n");
	    continue;
	  }
	  
	  if(N%2!=0)
	    {
	      printf("0\n");
	      continue;
	    }
	    
	    if(HaveOdd(N))
	     {
	       printf("1\n");
	       continue;
	     }
	     
        while(N>0)
        {
            if(HaveOdd(N))
            {
                operation++;  
                break;
            }

            int c=maxDigit(N);
          
            if(c==0)
            {
                operation=-1;
                break;
            }

            N=N -c;
            operation++;
        }
        
            printf("%d\n",operation);
	}
	
	return 0;

}


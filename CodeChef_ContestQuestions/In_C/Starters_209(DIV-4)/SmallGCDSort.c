#include <stdio.h>

int gcd(int a,int b)
{
    while(b != 0)
    {
     int temp = b;
     b = a % b;
     a = temp;
    }
    return a;
}


int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  
	  int ar[N][2];
	  
	  for(int i= 0;i<N;i++)
	    {
        ar[i][0]=gcd(i+1,N);
        ar[i][1]=i+1;
        }

	  for (int i=0;i<N-1;i++)
	  {
            for(int j=0;j<N-i-1;j++)
            {
                if(ar[j][0]<ar[j+1][0] ||
                   (ar[j][0]==ar[j+1][0]&&ar[j][1]>ar[j + 1][1]))
                { 
                      
                    int tempG=ar[j][0];
                    int tempI=ar[j][1];
                    ar[j][0]=ar[j + 1][0];
                    ar[j][1]=ar[j + 1][1];
                    ar[j+1][0]=tempG;
                    ar[j+1][1]=tempI;
                }
            }
        }
        
        for(int i=0;i<N;i++) 
        {
        printf("%d ",ar[i][1]);
        }
        printf("\n");
	  
	    
	}
	
	return 0;

}


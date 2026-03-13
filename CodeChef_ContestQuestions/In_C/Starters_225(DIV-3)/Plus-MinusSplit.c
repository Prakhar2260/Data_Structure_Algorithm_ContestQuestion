#include <stdio.h>


int IsEqual(int *arr,int N)
 {
    
    
    for(int i=1;i<N;i++)
     {
         if(arr[i-1]!=arr[i])
          return 0;

     }
     
     return 1;
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
	   
	   int array[N];
	   for(int i=0;i<N;i++)
	   {
	     scanf("%d",&array[i]);    
	   }
	   
	   int dummyArray[N];
	   
	   int k=IsEqual(array,N);
	   
	   if(k==1)
	    {
	       printf("YES\n");
	       continue;
	    }
	    
	    int l;
	   
	   for(int i=0;i<N;i++)
	    {
	       for(int j=0;j<N;j++)
	        {
	          if(j<i)
	           {
	             dummyArray[j]=array[i]+array[j];    
	           }
	           
	          else
	           {
	               dummyArray[j]=array[j]-array[i];
	           }
	        
	        }
	        
	         l=IsEqual(dummyArray,N);
	        
	        if(l==1)
	         break;
	    }
	    
	    if(l==1)
	    {
	       printf("YES\n"); 
	    }
	    
	    else
	     {
	        printf("NO\n"); 
	     }
	    
	    
	}
    
    return 0;
}

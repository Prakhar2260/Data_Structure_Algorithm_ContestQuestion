#include <stdio.h>

int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a; 
}


int main() {
	// your code goes here
    int T;
    scanf("%d",&T);
    
    while(T--)
      {
        int N,X,K;
        scanf("%d %d %d",&N,&X,&K);
          
        int ar[N];
        
        for(int i=0;i<N;i++)
          scanf("%d",&ar[i]);
          
        qsort(ar,N,sizeof(int),cmp);  
          
        for(int i=0;i<K&&i<N;i++) 
        {
            ar[i]=0;
            X+=100;
        }
          
          int count=0;
          
          for(int i=0;i<N;i++)
            {
             if(X<ar[i])
               count++;
            }
            
            printf("%d\n",count+1);
      }
 return 0;
}


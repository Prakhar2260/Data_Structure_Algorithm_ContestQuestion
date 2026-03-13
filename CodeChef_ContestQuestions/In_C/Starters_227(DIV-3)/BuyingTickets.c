#include <stdio.h>

int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N,K;
	    scanf("%d %d",&N,&K);
	    
	    int array[N];
	    for(int i=0;i<N;i++)
	     {
	        scanf("%d",&array[i]); 
	     }
	     
	     char Str[N+1];
	     scanf("%s",Str);
	     
	    int available[100];
        int count=0;

        for(int i=0;i<N;i++)
        {
            if(Str[i]=='0')
            {
                available[count++]=array[i];
            }
        }

        if(count<K)
        {
            printf("-1\n");
            continue;
        }
        
        qsort(available,count,sizeof(int),compare);

        int sum=0;
        for(int i=0;i<K;i++)
        {
            sum=sum + available[i];
        }

        printf("%d\n",sum);
	     
	}
	
	return 0;

}

#include <stdio.h>

int main() 
{
	// your code goes here
   
    int T;
    scanf("%d", &T);
    
    while (T--)
    {
        long long A,B;
        scanf("%lld %lld",&A,&B);
        
        if (A == B)
            printf("%lld\n", A + B - 1);
            
        else
            printf("%lld\n", A + B);
            
    }
    
    return 0;
}




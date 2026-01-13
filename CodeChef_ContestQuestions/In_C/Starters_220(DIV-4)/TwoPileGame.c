#include <stdio.h>


int main() {
	// your code goes here
  
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long bis,cake;
        
        scanf("%lld %lld", &bis,&cake);

         if(bis== 0)
            printf("Bob\n");
            
        else if(bis%2 ==1)
            printf("Alice\n");
            
        else
            printf("Bob\n");
    }

    return 0;
}


   





   








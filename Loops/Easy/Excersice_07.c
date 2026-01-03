// Count how many numbers between 1 and N are divisible by 5.

#include <stdio.h>

int main() {
    
    int n = 100;
    int count = 0;
    
    
    for(int i=1; i<=n; i++)
    {
        if(i % 5 == 0)
        {
            count++;        
        }
    }
    
    printf("%d",count);
    return 0;
}

/*
COUNT
20
*/

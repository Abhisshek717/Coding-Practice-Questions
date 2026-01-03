// Find the sum of numbers from 1 to N.

#include <stdio.h>

int main() {
    
    int n = 100;
    int sum = 0;
    
    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("Sum of n numbers: %d",sum);
    return 0;
}

/*
OUTPUT
Sum of n numbers: 5050
*/

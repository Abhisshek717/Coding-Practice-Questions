// Find the factorial of a number.
#include <stdio.h>

int main() {
    
    int n = 5;
    int factorial = 1;
    
    for(int i = n; i >= 1; i--)
    {
        factorial = factorial * i;        
    }
    
    printf("%d",factorial);
    return 0;
}

/*
OUTPUT
120
*/

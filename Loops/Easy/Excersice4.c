// Excersice 5: Sum of digits of a number

#include <stdio.h>

int main() {
    
    int num = 22; 
    
    int sum = 0;
    
    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("sum of digits of a number: %d", sum);
    
    return 0;
}

// Reverse a given number using a loop.
#include <stdio.h>

int main() {
    
    int number =123456;
    int reverse_number = 0;
    int last_number = 0;
    
    while(number != 0)
    {
        last_number = number % 10;
        reverse_number = reverse_number * 10 + last_number;
        number = number / 10;
    }
    
    printf("%d",reverse_number);

    return 0;
}

/*
OUTPUT
654321
*/

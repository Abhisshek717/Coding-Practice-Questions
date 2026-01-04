// Find the sum of digits of a number.
#include <stdio.h>

int main() {
    
    int number = 123456;
    int sum_of_a_number = 0;
    int last_number = 0;
    
    while(number != 0)
    {
        last_number = number % 10;
        sum_of_a_number = sum_of_a_number + last_number;
        number = number / 10;
    }
    printf("%d",sum_of_a_number);
    return 0;
}

/*
OUTPUT
21
*/

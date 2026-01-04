// Check whether a number is a palindrome.
#include <stdio.h>

int main() {
    
    int number = 153;
    int temp = number;
    int amstrong_number = 0;
    int last_number = 0;
    
    while(number != 0)
    {
        last_number = number % 10;
        amstrong_number = amstrong_number + (last_number * last_number * last_number);
        number = number / 10;
    }

    if(amstrong_number == temp)
    {
        printf("the number is amstrong number");
    }
    else
    {
        printf("the number is not a amstrong number");
    }
    return 0;
}
/*
OUTPUT
the number is amstrong number
*/

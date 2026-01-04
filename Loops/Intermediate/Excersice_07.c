// Find the largest digit in a number.
#include <stdio.h>

int main() {
    
    int number = 123456789;
    int temporary_number = number;
    int last_digit = 0;
    int big_number = 0;
    
    while(number != 0)
    {
        last_digit = number % 10;
        if(big_number < last_digit)
        {
            big_number = last_digit;
        }
        number = number / 10;
    }
    printf("the biggest digit %d in the %d",big_number,temporary_number);


    return 0;
}

/*
OUTPUT
the biggest digit 9 in the 123456789
*/

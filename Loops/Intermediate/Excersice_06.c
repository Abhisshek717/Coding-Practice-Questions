// Check whether a number is a palindrome.
#include <stdio.h>

int main() {
    
    int number = 121;
    int temporary_number = number;
    int last_digit = 0;
    int reverse_number = 0;
    
    while(number != 0)
    {
        last_digit = number % 10;
        reverse_number = reverse_number * 10 + last_digit;
        number = number / 10;
    }
    
    if(temporary_number == reverse_number)
    {
        printf("the number is a palindrome");
    }
    else
    {
        printf("the number is not a palindrome");
    }

    return 0;
}

/*
OUTPUT
the number is a palindrome
*/

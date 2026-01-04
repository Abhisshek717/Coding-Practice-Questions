// Count the number of digits in a number.
#include <stdio.h>

int main() {
    
    int number = 123456;
    int count = 0;
    
    while(number != 0)
    {
        count++;
        number = number / 10;
    }
    
    printf("%d",count);

    return 0;
}

/*
OUTPUT
6
*/

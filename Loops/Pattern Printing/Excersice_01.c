/*
PATTERN 1
=================

*****
*****
*****
*****

=================
*/
#include <stdio.h>

int main() {
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    

    return 0;
}

/*
OUTPUT

*****
*****
*****
*****

*/

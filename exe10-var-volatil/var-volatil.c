#include <stdio.h>

int main(void)
{
    volatile char t = 10;
    if ( 1 )
    {
        printf("hello");
    }
    return 0;
}
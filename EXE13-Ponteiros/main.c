#include <stdio.h>

int main(void)
{
    unsigned short count = 0XAABB; // 16bits
    /*
        0x -> 100
        0x -> 101
    */

    // todo ponteiro é do tipo unsigned int
    unsigned short *ponteiro;
    ponteiro = &count; //
    printf("%X \n", *ponteiro);

    // ponteiro++;
    // printf("%d", *ponteiro);

    return 0;
}
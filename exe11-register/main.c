#include <stdio.h>

int main(void)
{
    register int data = 10;
    printf("%d \n", data);
    data = 12;
    printf("%d \n", data);
    return 0;
}

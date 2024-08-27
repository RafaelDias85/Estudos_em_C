#include <stdio.h>

int main(void)
{
    unsigned int a;
    unsigned short int b;
    unsigned long int c;
    unsigned long long int d;

    printf("unsigned int %d \n", sizeof(a));
    printf("unsigned short int %d \n", sizeof(b));
    printf("unsigned long int %d \n", sizeof(c));
    printf("unsigned long long int %d \n", sizeof(d));

    return 0;
}
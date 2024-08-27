#include <stdio.h>

int main(void)
{
    unsigned char a;
    unsigned int b;
    float c;
    double d;
    long double e;

    // teste 02
    printf("char %d bytes\n", sizeof(a));
    printf("int %d bytes\n", sizeof(b));
    printf("float %d bytes\n", sizeof(c));
    printf("doube %d bytes\n", sizeof(d));
    printf("long %d bytes\n", sizeof(e));

    return 0;
}
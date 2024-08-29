#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // biblioteca que j� traz as redefini��es de tipos
#include <string.h> // biblioteca que tem o strcmp

typedef unsigned char BOOL; // em C n�o existe boleano para isso criaremos um typedef

#define TRUE 1  // definir o que � true
#define FALSE 0 // definir o que � false

BOOL compare(char *str1, char *str2)
{
    if (strcmp(str1, str2) == 0) // strcmp - recurso da biblioteca string.h para compara��o
        return TRUE;
    else
        return FALSE;
}

int32_t main(void) // int32_t tipo int j� redefinido para 32bits
{
    if (compare("HELLO", "OLA") == TRUE)
        printf("iguail");

    else

        printf("diferente");

    return 0;
}
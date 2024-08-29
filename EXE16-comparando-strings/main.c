#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // biblioteca que já traz as redefinições de tipos
#include <string.h> // biblioteca que tem o strcmp

typedef unsigned char BOOL; // em C não existe boleano para isso criaremos um typedef

#define TRUE 1  // definir o que é true
#define FALSE 0 // definir o que é false

BOOL compare(char *str1, char *str2)
{
    if (strcmp(str1, str2) == 0) // strcmp - recurso da biblioteca string.h para comparação
        return TRUE;
    else
        return FALSE;
}

int32_t main(void) // int32_t tipo int já redefinido para 32bits
{
    if (compare("HELLO", "OLA") == TRUE)
        printf("iguail");

    else

        printf("diferente");

    return 0;
}
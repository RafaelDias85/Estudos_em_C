#include <stdio.h>

void print(char *message) // variavel ponteiro, que armazena o endereço de message
{
    printf("%s \n", message); // valor
    printf("%d \n", message); // endereço message
}

int main(void)
{

    char message[] = "HELLO";

    /*CARC.       INDICE
    1 =   'H'     -> 0
    2 =   'E'     -> 1
    3 =   'L'     -> 2
    4 =   'L'     -> 3
    5 =   'O'     -> 4
    6 =    0 null -> 5*/

    print(message); // envia o endereço de message

    return 0;

}
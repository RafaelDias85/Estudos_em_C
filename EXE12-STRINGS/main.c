#include <stdio.h>

int main(void)
{
    /*Em C n�o existe tipo String, existe uma variavel que � capaz de armazenar
    um endere�o na memoria que aponta para um vetor - ou Exoste a possibilidade
    de Criar uma variavel que � um vetor de char na qual � armazenado os caracteres*/

    char message[] = "HELLO";

    /*CARC.       INDICE
    1 =   'H'     -> 0
    2 =   'E'     -> 1
    3 =   'L'     -> 2
    4 =   'L'     -> 3
    5 =   'O'     -> 4
    6 =    0 null -> 5*/

    printf("%s \n", message);
    printf("%d \n", message);
    printf("%d \n", &message[0]);

    return 0;
}
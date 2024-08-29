#include <stdio.h>

int main(void)
{
    /*Em C não existe tipo String, existe uma variavel que é capaz de armazenar
    um endereço na memoria que aponta para um vetor - ou Exoste a possibilidade
    de Criar uma variavel que é um vetor de char na qual é armazenado os caracteres*/

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
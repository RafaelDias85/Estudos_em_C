#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Variaveis não podem estar misturado com comandos
    // dessa maneira a variavel já foi criada
    // char txt[100]; // assim o valor do vetor já foi definido com zeros
    // txt = "HELLO"; //O nome do vetor já é um número, aqui está tentando inserir outro valor
    // o O HELLO já é uma constante

    // temos que ter cuidado ao definir um valor para o vetor para que não haja
    // invasão de endereço de memoria
    char txt[5]; // 6 é a quantidade de catacteres que cabem no vetor
    unsigned int count = 5555;
    char *message = "HELLO";

    // sprintf função nativa da linguagem (função pesada)
    sprintf(txt, "%s", "hello"); // parametros: end do Buffer, "formatação de string", "mensagem"

    printf("%s \n", txt);
    printf("%d", count);

    // para evitar a invasão de memoria usar o snprintf
    // sizeof retorna a quantidade de bits contida na variavel

    snprintf(txt, sizeof(txt), "%s", "hello");
    printf("%.*s \n", syzeof(txt), txt);

    return 0;
}
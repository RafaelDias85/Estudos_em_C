#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Variaveis n�o podem estar misturado com comandos
    // dessa maneira a variavel j� foi criada
    // char txt[100]; // assim o valor do vetor j� foi definido com zeros
    // txt = "HELLO"; //O nome do vetor j� � um n�mero, aqui est� tentando inserir outro valor
    // o O HELLO j� � uma constante

    // temos que ter cuidado ao definir um valor para o vetor para que n�o haja
    // invas�o de endere�o de memoria
    char txt[5]; // 6 � a quantidade de catacteres que cabem no vetor
    unsigned int count = 5555;
    char *message = "HELLO";

    // sprintf fun��o nativa da linguagem (fun��o pesada)
    sprintf(txt, "%s", "hello"); // parametros: end do Buffer, "formata��o de string", "mensagem"

    printf("%s \n", txt);
    printf("%d", count);

    // para evitar a invas�o de memoria usar o snprintf
    // sizeof retorna a quantidade de bits contida na variavel

    snprintf(txt, sizeof(txt), "%s", "hello");
    printf("%.*s \n", syzeof(txt), txt);

    return 0;
}
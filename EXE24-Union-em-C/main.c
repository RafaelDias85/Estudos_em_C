#include <stdio.h>   // Inclui a biblioteca padr�o de entrada e sa�da, necess�ria para usar printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padr�o, geralmente usada para fun��es de aloca��o de mem�ria e convers�o

// Defini��o de uma uni�o an�nima (union) que pode armazenar dados de diferentes tipos na mesma localiza��o de mem�ria
union
{
    unsigned char buf[2];   // Array de 2 bytes (unsigned char) para armazenar valores individuais
    unsigned short result;   // Vari�vel de 2 bytes (unsigned short) para armazenar o resultado como um �nico valor
} data;  // Declara a uni�o com o nome 'data'

unsigned char high = 0xAA;  // Define uma vari�vel 'high' do tipo unsigned char e atribui o valor hexadecimal 0xAA
unsigned char low = 0xBB;   // Define uma vari�vel 'low' do tipo unsigned char e atribui o valor hexadecimal 0xBB

int main(void)  // Fun��o principal do programa
{
    // Atribui o valor de 'low' ao primeiro byte do buffer da uni�o
    data.buf[0] = low;   // O primeiro elemento do array buf recebe o valor de 'low'

    // Atribui o valor de 'high' ao segundo byte do buffer da uni�o
    data.buf[1] = high;  // O segundo elemento do array buf recebe o valor de 'high'
    
    // Exibe o valor armazenado em 'result' na forma hexadecimal
    // Como 'buf' e 'result' compartilham a mesma localiza��o de mem�ria, 'result' conter� a combina��o dos dois bytes
    printf("%X", data.result);  // Imprime o resultado como um n�mero hexadecimal

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}

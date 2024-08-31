#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída, necessária para usar printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão, geralmente usada para funções de alocação de memória e conversão

// Definição de uma união anônima (union) que pode armazenar dados de diferentes tipos na mesma localização de memória
union
{
    unsigned char buf[2];   // Array de 2 bytes (unsigned char) para armazenar valores individuais
    unsigned short result;   // Variável de 2 bytes (unsigned short) para armazenar o resultado como um único valor
} data;  // Declara a união com o nome 'data'

unsigned char high = 0xAA;  // Define uma variável 'high' do tipo unsigned char e atribui o valor hexadecimal 0xAA
unsigned char low = 0xBB;   // Define uma variável 'low' do tipo unsigned char e atribui o valor hexadecimal 0xBB

int main(void)  // Função principal do programa
{
    // Atribui o valor de 'low' ao primeiro byte do buffer da união
    data.buf[0] = low;   // O primeiro elemento do array buf recebe o valor de 'low'

    // Atribui o valor de 'high' ao segundo byte do buffer da união
    data.buf[1] = high;  // O segundo elemento do array buf recebe o valor de 'high'
    
    // Exibe o valor armazenado em 'result' na forma hexadecimal
    // Como 'buf' e 'result' compartilham a mesma localização de memória, 'result' conterá a combinação dos dois bytes
    printf("%X", data.result);  // Imprime o resultado como um número hexadecimal

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}

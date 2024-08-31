#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Serial_t
typedef struct Serial
{
    const char *ComPort;   // Ponteiro constante para uma string, armazenando o nome da porta de comunicação
    unsigned int BaudRate; // Taxa de transmissão de dados em bits por segundo
} Serial_t;

int main(void)
{
    // Inicialização da estrutura Serial_t usando designação de membros
    Serial_t Uart = 
    {
        .BaudRate = 2400,   // Define a taxa de transmissão de dados como 2400 bps
        .ComPort = "COM1",  // Define a porta de comunicação como "COM1"
    };

    // Exemplo de declaração de ponteiro constante para uma string
    const char *txt = "Bom Dia"; // 'txt' armazena o endereço da string "Bom Dia" que está em uma região de memória constante

    // Declaração de um array de caracteres
    char txt1[] = "COM1"; // 'txt1' é um array de caracteres inicializado com a string "COM1"
    printf("%s \n", txt1); // Exibe o conteúdo de 'txt1'

    // Comentei a linha abaixo porque é inválida:
    // txt1[] = "COM2"; // Não pode ser feito, pois arrays não podem ser reatribuídos a novas strings diretamente

    // Uso da função snprintf para formatar e armazenar uma string em 'txt1'
    snprintf(txt1, sizeof(txt1), "%s \n", "COM1"); // Formata "COM1" e armazena em 'txt1', respeitando o tamanho do array

    // Exibe o conteúdo de 'txt1' com um limite de tamanho
    printf("%.*s \n", sizeof(txt1), txt1); // Exibe 'txt1' até o tamanho máximo de 'txt1'

    // Exibe os valores dos membros da estrutura Uart
    printf("%s; BaudRate=%d \n", Uart.ComPort, Uart.BaudRate); // Mostra o conteúdo da porta e a taxa de transmissão

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

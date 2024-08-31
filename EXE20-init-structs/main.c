#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura Serial_t
typedef struct Serial
{
    const char *ComPort;   // Ponteiro constante para uma string, armazenando o nome da porta de comunica��o
    unsigned int BaudRate; // Taxa de transmiss�o de dados em bits por segundo
} Serial_t;

int main(void)
{
    // Inicializa��o da estrutura Serial_t usando designa��o de membros
    Serial_t Uart = 
    {
        .BaudRate = 2400,   // Define a taxa de transmiss�o de dados como 2400 bps
        .ComPort = "COM1",  // Define a porta de comunica��o como "COM1"
    };

    // Exemplo de declara��o de ponteiro constante para uma string
    const char *txt = "Bom Dia"; // 'txt' armazena o endere�o da string "Bom Dia" que est� em uma regi�o de mem�ria constante

    // Declara��o de um array de caracteres
    char txt1[] = "COM1"; // 'txt1' � um array de caracteres inicializado com a string "COM1"
    printf("%s \n", txt1); // Exibe o conte�do de 'txt1'

    // Comentei a linha abaixo porque � inv�lida:
    // txt1[] = "COM2"; // N�o pode ser feito, pois arrays n�o podem ser reatribu�dos a novas strings diretamente

    // Uso da fun��o snprintf para formatar e armazenar uma string em 'txt1'
    snprintf(txt1, sizeof(txt1), "%s \n", "COM1"); // Formata "COM1" e armazena em 'txt1', respeitando o tamanho do array

    // Exibe o conte�do de 'txt1' com um limite de tamanho
    printf("%.*s \n", sizeof(txt1), txt1); // Exibe 'txt1' at� o tamanho m�ximo de 'txt1'

    // Exibe os valores dos membros da estrutura Uart
    printf("%s; BaudRate=%d \n", Uart.ComPort, Uart.BaudRate); // Mostra o conte�do da porta e a taxa de transmiss�o

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

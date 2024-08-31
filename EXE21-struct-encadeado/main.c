#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

// Função principal do programa
int main(void)
{
    // Inicialização da estrutura Serial_t usando designação de membros (C99)
    // Cada campo da estrutura é inicializado com um valor específico

    Serial_t Uart = 
    {
        .ComPort = "COM5",            // Inicializa o campo ComPort com a string "COM5"
        .BaudRate = 9600,             // Inicializa o campo BaudRate com o valor 9600
        .Config =                     // Inicializa o campo Config, que é uma estrutura aninhada
        {
            .buffer = "Porta Comunicacao Serial", // Inicializa o campo buffer da estrutura Config com a string "Porta Comunicacao Serial"
        },
    };

    // Exibe os valores inicializados dos campos ComPort, BaudRate, e buffer da estrutura Uart
    printf("%s;\nBaudRate= %d \n%s\n", Uart.ComPort, Uart.BaudRate, Uart.Config.buffer);

    // Usa a função strcpy para copiar uma nova string para o campo buffer da estrutura Config dentro de Uart
    strcpy(Uart.Config.buffer, "Porta Comunicacao");

    // Exibe novamente os valores de ComPort, BaudRate, e buffer, após a modificação no buffer
    printf("%s;\nBaudRate= %d \n%s", Uart.ComPort, Uart.BaudRate, Uart.Config.buffer);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}

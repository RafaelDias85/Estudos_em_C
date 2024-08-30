#include <stdio.h>
#include <stdlib.h>

// Define a estrutura Serial para armazenar as configurações de comunicação
// uma maneira melhor para estruturar com typedef
typedef struct Serial
{
    unsigned char ComPort; // Porta de comunicação (ex: COM1)
    unsigned int BaudRate; // Taxa de Baud (ex: 9600 bps)
}Serial_t;

//renomeia o struct Serial para Serial_t - Boas Praticas _t utilizado para falar de Tipo 
//typedef struct Serial Serial_t; //existe uma maneira melhor para declarar o typedef, olhe acima.

int main( void )
{
    Serial_t Uart; // Cria uma instância da estrutura Serial
    Uart.ComPort = 1; // Define a porta de comunicação como COM1
    Uart.BaudRate = 9600; // Define a taxa de Baud como 9600 bps

    printf("com%d; BaudRate=%d \n", Uart.ComPort, Uart.BaudRate);

    
    return 0;
}
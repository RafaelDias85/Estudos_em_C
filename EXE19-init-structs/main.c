#include <stdio.h>
#include <stdlib.h>

typedef struct Serial
{
    unsigned char ComPort;
    unsigned int BaudRate;
} Serial_t;

int main(void)
{
    // nova forma de declarar variaveis do struct
    Serial_t Uart =
        {
            .BaudRate = 2400,
            .ComPort = 3,
        };
    // Uart.ComPort = 1;
    // Uart.BaudRate = 9600;

    printf("com%d; BaudRate=%d \n", Uart.ComPort, Uart.BaudRate);

    return 0;
}
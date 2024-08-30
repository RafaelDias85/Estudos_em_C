#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

int main(void)
{
    Serial_t Uart =
        {
            .ComPort = "COM5",
            .BaudRate = 9600,
            .Config =
                {
                    .buffer = "Porta Comunicacao Serial",
                },
        };

    printf("%s;\nBaudRate= %d \n%s\n", Uart.ComPort, Uart.BaudRate, Uart.Config.buffer);

    strcpy(Uart.Config.buffer, "Porta Comunicacao");

    printf("%s;\nBaudRate= %d \n%s", Uart.ComPort, Uart.BaudRate, Uart.Config.buffer);
    return 0;
}
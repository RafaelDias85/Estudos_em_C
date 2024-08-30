#include <stdio.h>
#include <stdlib.h>

typedef struct Serial
{
    const char *ComPort;
    unsigned int BaudRate;
} Serial_t;

int main(void)
{
    // nova forma de declarar variaveis do struct
    Serial_t Uart =
        {
            .BaudRate = 2400,
            .ComPort = "COM1",
        };

    // exemplo
    const char *txt = "Bom Dia"; // txt está recebendo o endereço inicial da
                                 // cadeia de caracteres da memoria que é uma constante

    char txt1[] = "COM1";
    printf("%s \n", txt1);

    // txt1[] = "COM2"; // NÃO ALTERA

    snprintf(txt1, sizeof(txt1), "%s \n", "COM1");

    printf("%.*s \n", sizeof(txt1), txt1);

    printf("%s; BaudRate=%d \n", Uart.ComPort, Uart.BaudRate);

    return 0;
}
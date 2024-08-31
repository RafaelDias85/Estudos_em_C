#include <stdio.h>
#include <stdlib.h>

// Utilizado para alinhar a estrutura e assim distribuir os bytes de forma mais eficiente
#pragma pack(1)
typedef struct Serial
{                           
    // Normalmente, as estruturas podem ter "desalinhamento" de bytes para otimizar a performance,
    // o que pode causar o uso de mais mem�ria do que o necess�rio.
    // O pragma pack(1) for�a a estrutura a n�o ter desalinhamento, garantindo o uso m�nimo de mem�ria.

    unsigned int BaudRate; // 4 bytes B B B B - ocupa exatamente 4 bytes na mem�ria
    unsigned char ComPort; // 1 byte B X X X - ocupa 1 byte, mas sem o pragma pack(1), poderia ser alocado em 4 bytes devido ao alinhamento.

    // Melhor pr�tica: declarar as vari�veis de maior tamanho (em bytes) primeiro para minimizar o desalinhamento,
    // caso n�o se utilize o pragma pack(1).
  
} Serial_t;

int main(void)
{
    Serial_t Uart;

    printf("%d \n", sizeof(Uart)); // Exibe o tamanho em bytes da estrutura Serial_t
    return 0;
}

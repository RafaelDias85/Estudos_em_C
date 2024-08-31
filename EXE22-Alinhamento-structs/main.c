#include <stdio.h>
#include <stdlib.h>

// Utilizado para alinhar a estrutura e assim distribuir os bytes de forma mais eficiente
#pragma pack(1)
typedef struct Serial
{                           
    // Normalmente, as estruturas podem ter "desalinhamento" de bytes para otimizar a performance,
    // o que pode causar o uso de mais memória do que o necessário.
    // O pragma pack(1) força a estrutura a não ter desalinhamento, garantindo o uso mínimo de memória.

    unsigned int BaudRate; // 4 bytes B B B B - ocupa exatamente 4 bytes na memória
    unsigned char ComPort; // 1 byte B X X X - ocupa 1 byte, mas sem o pragma pack(1), poderia ser alocado em 4 bytes devido ao alinhamento.

    // Melhor prática: declarar as variáveis de maior tamanho (em bytes) primeiro para minimizar o desalinhamento,
    // caso não se utilize o pragma pack(1).
  
} Serial_t;

int main(void)
{
    Serial_t Uart;

    printf("%d \n", sizeof(Uart)); // Exibe o tamanho em bytes da estrutura Serial_t
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura Buffer_t
typedef struct Buffer
{
    char txt[100]; // Array de 100 caracteres para armazenar uma string
} Buffer_t;

// Defini��o da estrutura Serial_t
typedef struct Serial
{
    unsigned int BaudRate; // Taxa de transmiss�o em bps (bits por segundo)
    unsigned char ComPort; // Porta de comunica��o representada como um byte
    Buffer_t buffer;       // Membro do tipo Buffer_t que cont�m um array de caracteres
} Serial_t;

// Fun��o que recebe um ponteiro para uma estrutura Serial_t e exibe seus valores
void CopiarStruct(Serial_t *Uart)
{
    // Acessa e exibe os valores dos membros da estrutura usando o operador de seta (->)
    printf("BaudRate = %d ; ComPort = %d\n", Uart->BaudRate, Uart->ComPort);

    // Acessa o membro 'txt' do buffer contido na estrutura Uart e exibe a string armazenada
    printf("Texto do Buffer com Ponteiro: %s \n", Uart->buffer.txt);
}

int main(void)
{
    // Inicializa��o da estrutura Serial_t usando designa��o de membros
    Serial_t Uart =
        {
            .BaudRate = 9600, // Define BaudRate como 9600 bps
            .ComPort = 0,     // Define ComPort como 0 (pode representar uma porta espec�fica)
            .buffer =
                {
                    .txt = "Hello", // Inicializa o array 'txt' com a string "Hello"
                }};

    // Exibe o conte�do inicial do buffer (a string "Hello")
    printf("%s \n", Uart.buffer.txt);

    // Modifica o conte�do do buffer usando snprintf, garantindo que o tamanho do array n�o seja excedido
    snprintf(Uart.buffer.txt, sizeof(Uart.buffer.txt), "%s", "Serial COM XPTO");

    printf("Confirmar a mudanca: %s \n",Uart.buffer.txt);

    // Exibe o endere�o de mem�ria da estrutura Uart e o conte�do do buffer modificado
    // O endere�o de Uart � mostrado como um valor inteiro longo (note que %d pode n�o ser apropriado para endere�os, usar %p � mais seguro)
    printf("Endereco Uart = %p \nTexto do Buffer = %s\n", (void *)&Uart, Uart.buffer.txt);

    // Chama a fun��o CopiarStruct, passando o endere�o da estrutura Uart
    CopiarStruct(&Uart);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

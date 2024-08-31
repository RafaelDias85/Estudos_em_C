#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Buffer_t
typedef struct Buffer
{
    char txt[100]; // Array de 100 caracteres para armazenar uma string
} Buffer_t;

// Definição da estrutura Serial_t
typedef struct Serial
{
    unsigned int BaudRate; // Taxa de transmissão em bps (bits por segundo)
    unsigned char ComPort; // Porta de comunicação representada como um byte
    Buffer_t buffer;       // Membro do tipo Buffer_t que contém um array de caracteres
} Serial_t;

// Função que recebe um ponteiro para uma estrutura Serial_t e exibe seus valores
void CopiarStruct(Serial_t *Uart)
{
    // Acessa e exibe os valores dos membros da estrutura usando o operador de seta (->)
    printf("BaudRate = %d ; ComPort = %d\n", Uart->BaudRate, Uart->ComPort);

    // Acessa o membro 'txt' do buffer contido na estrutura Uart e exibe a string armazenada
    printf("Texto do Buffer com Ponteiro: %s \n", Uart->buffer.txt);
}

int main(void)
{
    // Inicialização da estrutura Serial_t usando designação de membros
    Serial_t Uart =
        {
            .BaudRate = 9600, // Define BaudRate como 9600 bps
            .ComPort = 0,     // Define ComPort como 0 (pode representar uma porta específica)
            .buffer =
                {
                    .txt = "Hello", // Inicializa o array 'txt' com a string "Hello"
                }};

    // Exibe o conteúdo inicial do buffer (a string "Hello")
    printf("%s \n", Uart.buffer.txt);

    // Modifica o conteúdo do buffer usando snprintf, garantindo que o tamanho do array não seja excedido
    snprintf(Uart.buffer.txt, sizeof(Uart.buffer.txt), "%s", "Serial COM XPTO");

    printf("Confirmar a mudanca: %s \n",Uart.buffer.txt);

    // Exibe o endereço de memória da estrutura Uart e o conteúdo do buffer modificado
    // O endereço de Uart é mostrado como um valor inteiro longo (note que %d pode não ser apropriado para endereços, usar %p é mais seguro)
    printf("Endereco Uart = %p \nTexto do Buffer = %s\n", (void *)&Uart, Uart.buffer.txt);

    // Chama a função CopiarStruct, passando o endereço da estrutura Uart
    CopiarStruct(&Uart);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}

#include "sys.h"//inclui o arquivo que tem o <stdio.h>
#include "lcd.h"//inclui o arquivo que tem os prototipos das funções


//Variavel Global Contator iniciado com 0
unsigned char count = 0;

//Função inicia
unsigned char lcd_init ( void )//inicializa um display
{
    Soma();
    printf( "lcd_init()\n" );
    return 0; // Normalmente em uma função o 0 é ok, -1 é error e 1 é data
}

//função escreve
unsigned char lcd_write ( unsigned int value ) // escreve um valor no display
{
    printf( "lcd = %d\n", value );//imprime uma mensagem no display e retorne um valor
    return 0;
}

// contador
unsigned char lcd_read_count ( void )//lê um valor de contagem, ( void ) função que não retorna valor
{
    return count;
}
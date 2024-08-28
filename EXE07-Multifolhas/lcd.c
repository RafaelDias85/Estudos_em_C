#include "sys.h"//inclui o arquivo que tem o <stdio.h>
#include "lcd.h"//inclui o arquivo que tem os prototipos das fun��es


//Variavel Global Contator iniciado com 0
unsigned char count = 0;

//Fun��o inicia
unsigned char lcd_init ( void )//inicializa um display
{
    Soma();
    printf( "lcd_init()\n" );
    return 0; // Normalmente em uma fun��o o 0 � ok, -1 � error e 1 � data
}

//fun��o escreve
unsigned char lcd_write ( unsigned int value ) // escreve um valor no display
{
    printf( "lcd = %d\n", value );//imprime uma mensagem no display e retorne um valor
    return 0;
}

// contador
unsigned char lcd_read_count ( void )//l� um valor de contagem, ( void ) fun��o que n�o retorna valor
{
    return count;
}
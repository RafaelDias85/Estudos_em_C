#include "sys.h"//inclui o arquivo que tem o <stdio.h>
#include "lcd.h"//inclui o arquivo com os prototipos das fun��es
#include "calc.h"//inclui o arquivo com o prototipo de fun��o do Calc.c

int main ( void )
{
    Soma();
    lcd_init();
    lcd_write(45);
    printf("Count = %d", lcd_read_count() );

    return 0;
}
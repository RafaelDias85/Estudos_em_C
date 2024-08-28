#include "sys.h"//inclui o arquivo que tem o <stdio.h>
#include "lcd.h"//inclui o arquivo com os prototipos das funções
#include "calc.h"//inclui o arquivo com o prototipo de função do Calc.c

int main ( void )
{
    Soma();
    lcd_init();
    lcd_write(45);
    printf("Count = %d", lcd_read_count() );

    return 0;
}
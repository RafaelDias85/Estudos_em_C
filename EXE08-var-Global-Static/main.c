#include <stdio.h>
#include "lcd.h"

unsigned int count = 50;
char txt [200];

int main ( void )
{
    lcd_init();
    lcd_write( 45 );
    return 0;
}
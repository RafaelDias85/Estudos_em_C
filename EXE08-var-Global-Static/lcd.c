#include <stdio.h>
// #include "lcd.h"

// static restringe o uso da variavel global somente a essa folha
// static unsigned int count = 50; 

//extern foi feclarada em algum lugar nesse projeto
extern unsigned int count;
extern char txt[]; 

unsigned char lcd_init ( void )
{  
    txt[0]=23;
    printf("%d \n", txt[0]);
    printf( "lcd_init()\n" );
    return 0; 
}


unsigned char lcd_write ( unsigned int value) 
{
    printf( "lcd_write = %d\n", value + count);
    return 0;
}
//ENCAPSOLAMENTO DA FOLHA
#ifndef __LCD_H__ //SE N�O DEFINIDO NOME_DA_FOLHA *BOAS PR�TICAS
#define __LCD_H__ //DEFINA NOME_DA_FOLHA

#include "calc.h"//inclui o arquivo com o prototipo de fun��o do Calc.c

//Prototipos de Fun��es:
unsigned char lcd_init ( void );
unsigned char lcd_write ( unsigned int value );
unsigned char lcd_read_count ( void );

#endif // FIM DO IF
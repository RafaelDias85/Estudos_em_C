//ENCAPSOLAMENTO DA FOLHA
#ifndef __LCD_H__ //SE NÃO DEFINIDO NOME_DA_FOLHA *BOAS PRÁTICAS
#define __LCD_H__ //DEFINA NOME_DA_FOLHA

#include "calc.h"//inclui o arquivo com o prototipo de função do Calc.c

//Prototipos de Funções:
unsigned char lcd_init ( void );
unsigned char lcd_write ( unsigned int value );
unsigned char lcd_read_count ( void );

#endif // FIM DO IF
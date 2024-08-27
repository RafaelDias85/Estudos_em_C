#include <stdio.h>
#include <locale.h>

// tudo em C � por fun��es
// podemos declarar variaveis dentro ou fora das fun��es

// fun��o de soma:

unsigned int Soma(unsigned char x, unsigned char z)
{
    return x + z;
}

int main( void )
{
    setlocale(LC_ALL, "Portuguese");
    /*
        
    //variavel do tipo unsigned (recebe somente valores positivos) char 0 a 255 
    unsigned char result;
    //chamada de fun��o Soma que requer dois parametros!
    result = (unsigned char) Soma( 200, 56); // nesse caso vai retornar um zero pois o Char s� suporta at� 255
                                            // se realmente quisermos o valor 256 precisamos mudar o tipo da variavel para int
    printf("O resultado da soma � %d \n", result);
    
    */

    //variavel do tipo unsigned (recebe somente valores positivos) int
    unsigned int result;

    //chamada de fun��o Soma que requer dois parametros!
    result = Soma( 200, 56); //aqui o valor sair� correto
    printf("O resultado da soma � %d \n", result);

    // printf("%d", sizeof(1));

    return 0;
}
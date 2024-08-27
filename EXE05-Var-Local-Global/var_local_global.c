#include <stdio.h>
#include <locale.h>

// variavel count � uma variavel GLOBAL, portanto pode ser acessada em qualquer local no codigo.
unsigned int count = 10;

//fun��o soma
unsigned int Soma(unsigned char x, unsigned char z)// x , z s�o variaveis locais dentro da Fun��o soma
{
    return x + z + count;//consumindo a variavel count na fun��o soma
}

//fun��o main - Ponto de entrada do Programa;
int main( void )
{
    setlocale(LC_ALL, "Portuguese");
    
    unsigned int result; // variavel result � uma variavel local dentro do main
    result = Soma( 200, 56);
    printf("O resultado da soma � %d\n", result + count); //consumindo a varivel count na fun��o principal main

    return 0;
}

#include <stdio.h>
#include <locale.h>

// variavel count é uma variavel GLOBAL, portanto pode ser acessada em qualquer local no codigo.
unsigned int count = 10;

//função soma
unsigned int Soma(unsigned char x, unsigned char z)// x , z são variaveis locais dentro da Função soma
{
    return x + z + count;//consumindo a variavel count na função soma
}

//função main - Ponto de entrada do Programa;
int main( void )
{
    setlocale(LC_ALL, "Portuguese");
    
    unsigned int result; // variavel result é uma variavel local dentro do main
    result = Soma( 200, 56);
    printf("O resultado da soma é %d\n", result + count); //consumindo a varivel count na função principal main

    return 0;
}

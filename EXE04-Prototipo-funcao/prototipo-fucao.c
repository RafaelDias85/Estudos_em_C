//Necess�ria para usar a fun��o printf e outras opera��es de entrada/sa�da.
#include <stdio.h>

//Usada para configurar a localidade do programa, permitindo o uso de caracteres especiais no output
#include <locale.h>

//As fun��es n�o precisam nescessariamente serem criadas no inicio do programa
//pois a medida que o programa vai crescendo, ficar� dificil de lidar com isso
//para isso tem o recurso chamado prototipo de fun��o;

//Prototipo da Fun��o soma;
unsigned int Soma(unsigned char x, unsigned char z);//Declarou uma fun��o, devemos colocar no 
                                                    //inicio do programa o Prototipo da fun��o
//Prototipo da Fun��o Divide
int Divide( int x, int z);

/*####################################################################*/

//fun��o main - Ponto de entrada do Programa;
int main( void )
{
    //permite que o programa trate corretamente os caracteres acentuados e outros caracteres especiais.
    setlocale(LC_ALL, "Portuguese");

    
    unsigned int result;

    //chamada de fun��o Soma que requer dois parametros!
    result = Soma( 200, 56); //aqui o valor sair� correto
    printf("O resultado da soma � %d a Divis�o � %d \n", result, Divide(100 , 50));

    return 0;
}

/*####################################################################*/

//fun��o soma
unsigned int Soma(unsigned char x, unsigned char z)
{
    return x + z;
}

//fun��o Divide
int Divide( int x, int z)
{
    return x / z;
}
//Necessária para usar a função printf e outras operações de entrada/saída.
#include <stdio.h>

//Usada para configurar a localidade do programa, permitindo o uso de caracteres especiais no output
#include <locale.h>

//As funções não precisam nescessariamente serem criadas no inicio do programa
//pois a medida que o programa vai crescendo, ficará dificil de lidar com isso
//para isso tem o recurso chamado prototipo de função;

//Prototipo da Função soma;
unsigned int Soma(unsigned char x, unsigned char z);//Declarou uma função, devemos colocar no 
                                                    //inicio do programa o Prototipo da função
//Prototipo da Função Divide
int Divide( int x, int z);

/*####################################################################*/

//função main - Ponto de entrada do Programa;
int main( void )
{
    //permite que o programa trate corretamente os caracteres acentuados e outros caracteres especiais.
    setlocale(LC_ALL, "Portuguese");

    
    unsigned int result;

    //chamada de função Soma que requer dois parametros!
    result = Soma( 200, 56); //aqui o valor sairá correto
    printf("O resultado da soma é %d a Divisão é %d \n", result, Divide(100 , 50));

    return 0;
}

/*####################################################################*/

//função soma
unsigned int Soma(unsigned char x, unsigned char z)
{
    return x + z;
}

//função Divide
int Divide( int x, int z)
{
    return x / z;
}
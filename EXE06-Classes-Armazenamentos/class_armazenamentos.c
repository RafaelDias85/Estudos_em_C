#include <stdio.h>
#include <locale.h>

// fun��o soma
unsigned int Soma()
{
    static unsigned char t = 0;
    t++;
    t++;
    return t;
}

// fun��o main - Ponto de entrada do Programa;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("%d\n", Soma());
    printf("%d\n", Soma());

  return 0;
}

#include <stdio.h>
#include <locale.h>

// função soma
unsigned int Soma()
{
    static unsigned char t = 0;
    t++;
    t++;
    return t;
}

// função main - Ponto de entrada do Programa;
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("%d\n", Soma());
    printf("%d\n", Soma());

  return 0;
}

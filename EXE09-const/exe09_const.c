#include <stdio.h>

const float PI = 3.1415;

void print(const char *txt)
{
    while (*txt != 0)
    {
        printf("%c", *txt++);
    };
}

int main(void)
{
    char pot[] = "HELLO"; // A STRING é um vetor de char const
    print(pot);

    return 0;
}
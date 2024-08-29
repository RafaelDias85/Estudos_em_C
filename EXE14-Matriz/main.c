#include <stdio.h>

void print(char *txt)
{
    while (*txt != '\0') 
    {
        printf("%c", *txt);
        txt++;
    }

}

int main(void)
{
    char txt[20] = {'A', 'B', 'C', 0}; // mesma coisa de "ABC" -> string
    /*
    txt[0] -> 100 -> 'A'
    txt[1] -> 101 -> 'B'
    txt[2] -> 102 -> 'C'
    txt[3] -> 103 ->  0
*/

    print( txt );
    return 0;
}
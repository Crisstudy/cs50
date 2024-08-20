#include <cs50.h>
#include <stdio.h>

//a função principal
int main(void)
{
    //definir as variaveis
    int altura;
    int hashe;
    int space;

    //laço de repetição
    do
    {
        altura = get_int("altura: ");
    }
    //verificar a condiçao
    while (altura < 1|| altura > 8);

    hashe = altura - 1;
    space = altura;

    //repetição do bloco (inicialization; condition; update)
    for(int a = 0; a < altura; a ++)
    {
        for(int h = 0; h < altura; h ++)
        {
            if (h >= hashe)
            {
                //texto para repetição
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        hashe --;
    }
}
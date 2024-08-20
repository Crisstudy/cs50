#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //definir variavel
    int altura;
    int hashe;
    int space;

        //repetição
        do
        {
            altura = get_int("altura: ");
        }
        // verificar a condição
        while ( altura < 1|| altura > 8);

        hashe = altura - 1;
        space = altura;

        //repetição (inicialization; condition; update)
        for (int a = 0; a < altura; a ++)
        {
            for (int h = 0; h < altura; h ++)
            {
                if (h >= hashe)
                {
                    printf ("#");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
            hashe --;
        }
            for (int j = 1;j <= 8; j++)
            {
             for (int i = 1; i <= j; i ++)
            {
                printf("#");
            }
                printf("\n");
            }
    }
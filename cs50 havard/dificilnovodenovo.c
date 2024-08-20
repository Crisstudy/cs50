#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura = get_int("altura: ");

    for (int i = 0; i < altura; i ++)
    {
        for (int z = altura - i; z > 0; z --)
        {
            printf(" ");
        }
        for(int j = 0; j < i + 1; j ++)
        {
            printf("#");
        }
         printf(" ");
         for (int s = 0; s < i + 1; s++)
         {
             printf("#");
         }
        printf("\n");
    }
}
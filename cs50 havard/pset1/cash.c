#include <cs50.h>
#include <stdio.h>
# include <math.h>


int main(void)
{
    int moedas = 0;
    float troco= 0;
}
    do
    {
        troco = get_float("digite o troco:\n");
    }
    while (troco<0);

    int cent25 = troco * 100 / 25;
    if(cent25 >= 1)
        {
            moedas = cent25;
            troco = (troco * 100 - cent25 * 25) / 100;
        }

    int cent10 = troco * 100 / 10;
    if(cent10 >= 1)
        {
            moedas = moedas + cent10;
            troco = (troco * 100 - cent10 * 10) / 100;
        }

    int cent5 = troco * 100 / 5;
    if(cent5 >= 1)
        {
            moedas = moedas + cent5;
            troco = (troco * 100 - cent5 * 5) / 100;
        }

    int cent1 = troco * 100 / 1;
    if(cent1 >= 1)
        {
            moedas = moedas + cent1;
            troco = (troco * 100 - cent1 * 100) / 100;
        }

            printf("%i\n", moedas);

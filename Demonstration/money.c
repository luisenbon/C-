#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float troco;
    int moedas, moedas25, moedas10, moedas5, moedas1;
    int m25=25, m10=10, m5=5, m1=1;
    moedas25 = 0, moedas10 = 0, moedas5 = 0, moedas1 = 0;

    do
    {
        troco = get_float("qual o troco: ");
    }
    while (troco <0);
    troco = (troco * 100);

    if (troco>=25)
    do
    {
        troco=troco-25;
        moedas25++;
    }
    while (troco>=25);

    printf("o numero de 25 é %i\n", moedas25);

    if (troco>=10)
    do
    {
        troco=troco-10;
        moedas10++;
    }
    while (troco>=10);

    printf("o numeros de 10 é %i\n", moedas10);

    if (troco>=5)
    do
    {
        troco=troco-5;
        moedas5++;
    }
    while (troco>=5);
    printf ("o numero de 5 é  %i\n", moedas5);

    if  (troco>=1)
    do
    {
        troco=troco-1;
        moedas1++;
    }
    while (troco>=1);
    printf ("o numero de 1 é %i\n", moedas1);
}

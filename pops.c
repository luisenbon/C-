#include <cs50.h>
#include <stdio.h>
int main ()
{
    int popini, popfin, ano;
    {
        do
        {
        popini = get_int("PopIni: ");
        }
        while(popini<9)
        do
    {
        popfin = get_int("PopFin: ");
    }
    while(popfin<popini)

    int popnas = popini/3;
    int popmor = popini/4;

    do
    {
      popini+popnas-popmor;
      ano++;
    }
    while(popfin<popini)
    printf("%i", ano);
    }
}

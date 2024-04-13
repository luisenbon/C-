#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int h;
    int e;
    do
    {
        h = get_int("Altura: ");
        e = get_int("Divisão: ");
    }
    while
    (h<1 ||  h>8);
    
}

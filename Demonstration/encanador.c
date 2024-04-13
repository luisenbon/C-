
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int h;
    do
    {
        h=get_int("Altura: ");
    }
    while ( h<1 || h>8);

    for(int i = 0; i < h; i++)
    {


            if (i<h-1)
            {
                printf("?");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }



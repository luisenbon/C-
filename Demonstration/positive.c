#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n");
}

// Solicita um numero inteiro positivo ao int get_positive_int(void)
 {
    int n;
    do
    {
        n=get_int("Positive number: \n")
    }
    while (i>1);
    return n;
 }

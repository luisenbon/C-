#include <stdio.h>
#include <cs50.h>

int main(void) {
    int m, n, s1, s2, b = 0;

    printf("Qual o comeco o xará? ");
    scanf("%i", &m);
    printf("Qual o fim o xará? ");
    scanf("%i", &n);

    for (m<n, b++)
    {
        if
        s1 = m / 3;
        s2 = m / 4;
        m = m + s1 - s2;

        printf("%i\n", b); // Movido aqui para ser impresso corretamente
    } else {
        printf("g\n");
    }

    return 0; // Indicação de que o programa foi executado corretamente
}

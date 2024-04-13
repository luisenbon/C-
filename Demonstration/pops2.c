#include <stdio.h>

int main(void) {
    int m, n, s1, s2, b = 0;

    printf("Qual o comeco o xará? ");
    scanf("%i", &m);
    printf("Qual o fim o xará? ");
    scanf("%i", &n);

    if (m < n, b++) {
        s1 = m / 3;
        s2 = m / 4;
        m = m + s1 - s2;

    }

    printf("%i\n", b); // Imprime o valor de b fora do bloco if

    return 0;
}

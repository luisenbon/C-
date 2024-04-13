#include <stdio.h>
int main()
{

    int x=1;
    int n=1;

    printf("Digite o numero: ");
    scanf("%i", &x);
    x=x*3;

    if(x>1)
    {
        printf("%i\n", x);
    }
    else{

    printf("Nao\n");
    }

    while(n>0)
    {
    printf("Digite o n: ");
    scanf("%i", &n);
    n=n*3;
    printf("%i\n", n);

    }

    int y,z;
    int res=1;
    do
    {
        printf("Primeiro dado: ");
        scanf("%i", &y);
        printf("Segundo dado: ");
        scanf("%i", &z);
        int m=(y+z)/2;
        printf("%i\n", m);

        printf("Deseja continuar? Sim-1 || Nao-2\n");
        scanf("%i", &res);
    }
    while (res==1);

    int ar, re=1;
    do
    {
        printf("Informe o lado: ");
        scanf("%i", &ar);
        printf("%i, sendo seu perimetro\n", 4*ar);
        printf("%i, sendo sua area\n", ar*ar);

        printf("Deseja continuar? Sim-1 || Nao-2\n");
        scanf("%i", &re);
    }
     while (re==1);

}




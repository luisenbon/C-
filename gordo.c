#include <stdio.h>
int main (void)
{
float alt, kg;
float res = kg/(alt*alt);
{
    do
    {
    printf("Qual alt: ");
    scanf("%f", &alt);
    }
    while(alt<1);

    do
    {
    printf("Qual kg: ");
    scanf("%f", &kg);
    }
    while(kg<1);

    if(res<=18.5)
    {
        printf("Abaixo\n");
    }
    else if(res>=18.5 && res<=25)
    {
        printf("Saudavel\n");
    }
     else if(res>=25 && res<=30)
    {
        printf("Sobre\n");
    }
    else if(res>=30 && res<=35)
    {
        printf("Ob1\n");
    }
    else if(res>=35 && res<=40)
    {
        printf("Ob2\n");
    }
    else
    {
        printf("Ob3\n");
    }
    }
}

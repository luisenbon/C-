#include <stdio.h>

void meow(void);
int main(void)
{
   for (int i = 0; i < 3; i++)
   {
      meow(3);
   }
}

void meow(int n)
{
   printf("meow\n");
}

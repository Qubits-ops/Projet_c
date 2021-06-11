#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
  write(1,&c,1);
}

int main()
{
  int z = 122;
  while (z >= 97){
    my_putchar(z);
    z--;
  }
  my_putchar('\n');
}


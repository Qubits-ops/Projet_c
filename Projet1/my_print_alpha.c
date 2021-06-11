#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
  write(1,&c,1);
}
int main(void){
  int a = 97;
  while (a <= 122){
    my_putchar(a);
    a++;

  }
  my_putchar('\n');
}


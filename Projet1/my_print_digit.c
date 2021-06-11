#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
  write(1,&c,1);
}

int main(void)
{
  int ch = 48;
  while(ch <= 57){
    my_putchar(ch);
    ch++;
  }
  my_putchar('\n');
}



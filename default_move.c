#include <stdio.h>
#include <kipr/wombat.h>

int main()
{
  printf("Hello, World!\n");
  motor(0,50);
  motor(3,50);
  msleep(3000);

  return 0;
}

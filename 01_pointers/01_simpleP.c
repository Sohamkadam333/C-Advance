#include <stdio.h>
int main()
{
  int n = 50;
  int *p = &n;
  printf("Address of n = %x\n", &n);
  printf("Address of n = %x\n", p);
  printf("value of n = %d\n", n);
  printf("value of n = %d\n", *p);

  return 0;
}
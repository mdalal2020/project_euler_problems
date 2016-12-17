#include <stdio.h>

int all_divisible(int n)
{
  for(int i = 2; i <= 20; i++)
  {
    if(n%i != 0 )
      return 0;
  }
  return 1;
}
int main(void)
{
  int n = 2520;
  while(all_divisible(n) == 0)
  {
    n += 1;
  }
  printf("%d", n);
}

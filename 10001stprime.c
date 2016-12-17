#include <stdio.h>

int is_prime(int n)
{
  for(int i = 2; i*i <= n; i++)
  {
    if(n%i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int next_prime(int n)
{
  while(is_prime(n) == 0)
  {
    n+=2;
  }
  return n;
}

int main(void)
{
  int i = 2;
  int j = 3;

  while(i < 10001)
  {
    j = next_prime(j+2);
    i++;
  }
  printf("%d %d", j, i);
}

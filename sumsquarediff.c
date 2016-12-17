#include <stdio.h>

int main(void)
{
  int sumsquare=0;
  int squaresum=0;
  for(int i = 1; i <= 100; i++)
  {
    sumsquare += i*i;
    squaresum += i;
  }
  squaresum *= squaresum;

  printf("%d", squaresum - sumsquare);

}

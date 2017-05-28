#include <stdio.h>

int is_palindrome(int product)
{
  int reverse = 0;
  int temp = product;
  while(temp)
  {
    reverse = temp%10 + reverse*10;
    temp /= 10;
  }

  if(reverse == product)
    return 1;
  return 0;
}

int main(void)
{
    int max_product = 0;

    for(int i = 100; i < 1000; i++)
    {
      for(int j = 100; j<1000; j++)
      {
        int product = i*j;
        if(is_palindrome(product) && product>max_product)
          max_product = product;
      }
    }
    printf("%d", max_product);
    
}
